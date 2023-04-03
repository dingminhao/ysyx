
#if defined(__GNUC__) && !defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmaybe-uninitialized"
#endif

#include "llvm/MC/MCAsmInfo.h"
#include "llvm/MC/MCContext.h"
#include "llvm/MC/MCDisassembler/MCDisassembler.h"
#include "llvm/MC/MCInstPrinter.h"
#if LLVM_VERSION_MAJOR >= 14
#include "llvm/MC/TargetRegistry.h"
#else
#include "llvm/Support/TargetRegistry.h"
#endif
#include "llvm/Support/TargetSelect.h"

#if defined(__GNUC__) && !defined(__clang__)
#pragma GCC diagnostic pop
#endif

#if LLVM_VERSION_MAJOR < 11
#error Please use LLVM with major version >= 11
#endif




using namespace llvm;

static llvm::MCDisassembler* gDisassembler = nullptr;
static llvm::MCSubtargetInfo* gSTI = nullptr;
static llvm::MCInstPrinter* gIP = nullptr;

static void init_disasm(const char* triple) {
    llvm::InitializeAllTargetInfos();
    llvm::InitializeAllTargetMCs();
    llvm::InitializeAllAsmParsers();
    llvm::InitializeAllDisassemblers();

    std::string errstr;
    std::string gTriple(triple);

    llvm::MCInstrInfo* gMII = nullptr;
    llvm::MCRegisterInfo* gMRI = nullptr;
    auto target = llvm::TargetRegistry::lookupTarget(gTriple, errstr);
    if (!target) {
        llvm::errs() << "Can't find target for " << gTriple << ": " << errstr << "\n";
        assert(0);
    }

    MCTargetOptions MCOptions;
    gSTI = target->createMCSubtargetInfo(gTriple, "", "");
    std::string isa = target->getName();
    if (isa == "riscv32" || isa == "riscv64") {
        gSTI->ApplyFeatureFlag("+m");
        gSTI->ApplyFeatureFlag("+a");
        gSTI->ApplyFeatureFlag("+c");
        gSTI->ApplyFeatureFlag("+f");
        gSTI->ApplyFeatureFlag("+d");
    }
    gMII = target->createMCInstrInfo();
    gMRI = target->createMCRegInfo(gTriple);
    auto AsmInfo = target->createMCAsmInfo(*gMRI, gTriple, MCOptions);
#if LLVM_VERSION_MAJOR >= 13
    auto llvmTripleTwine = Twine(triple);
    auto llvmtriple = llvm::Triple(llvmTripleTwine);
    auto Ctx = new llvm::MCContext(llvmtriple, AsmInfo, gMRI, nullptr);
#else
    auto Ctx = new llvm::MCContext(AsmInfo, gMRI, nullptr);
#endif
    gDisassembler = target->createMCDisassembler(*gSTI, *Ctx);
    gIP = target->createMCInstPrinter(llvm::Triple(gTriple),
        AsmInfo->getAssemblerDialect(), *AsmInfo, *gMII, *gMRI);
    gIP->setPrintImmHex(true);
    gIP->setPrintBranchImmAsAddress(true);
}


/**
 * @brief
 *
 * @param str 缓存buff地址
 * @param size 缓存长度
 * @param pc   指令地址
 * @param code 指令内容
 * @param nbyte 指令长度
 */
static void disassemble(char* str, int size, uint64_t pc, uint8_t* code, int nbyte) {
    MCInst inst;
    llvm::ArrayRef<uint8_t> arr(code, nbyte);
    uint64_t dummy_size = 0;
    gDisassembler->getInstruction(inst, dummy_size, arr, pc, llvm::nulls());

    std::string s;
    raw_string_ostream os(s);


    gIP->printInst(&inst, pc, "", *gSTI, os);
    int skip = s.find_first_not_of('\t');

    const char* p = s.c_str() + skip;
    assert((int)s.length() - skip < size);
    strcpy(str, p);
}
#include "../include/sim_top.h"
#include "../include/itrace.h"
extern Sim_top* St;
Itrace::Itrace(/* args */) {
    init_disasm("riscv64-pc-linux-gnu");
    cout << "Itrace init!" << endl;
}
Itrace::~Itrace() {
}

void Itrace::llvmDis() {
    static char dis_str[64];
    static uint64_t pc;
    static uint64_t inst;
    pc = St->getRegVal("pc");
    inst = St->mem->paddr_read(pc, 4);
    disassemble(dis_str, sizeof(dis_str), pc, (uint8_t*)&inst, 4);
    printf("PC : %08lx\t%s\n", pc, dis_str);
}