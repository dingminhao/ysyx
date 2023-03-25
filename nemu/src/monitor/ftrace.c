#include "ftrace.h"


static func_info elf_funcs[1024];
/*
           typedef struct {
               unsigned char e_ident[EI_NIDENT];
               uint16_t      e_type;  // Executable file
               uint16_t      e_machine; //RISC-V
               uint32_t      e_version; // 0x1
               ElfN_Addr     e_entry; // 0x80000000
               ElfN_Off      e_phoff; // 64 byte
               ElfN_Off      e_shoff; // 5896 byte  start of section headers
               uint32_t      e_flags; // 0x4
               uint16_t      e_ehsize; //64 size of this header
               uint16_t      e_phentsize; // size of program eaders
               uint16_t      e_phnum; // number of program headers
               uint16_t      e_shentsize; //size of section headers
               uint16_t      e_shnum; // number of section headers
               uint16_t      e_shstrndx; // Section header string table index
           } ElfN_Ehdr;
           */
void read_from_file(FILE *elf, size_t offset, size_t size, void* dest) {
    fseek(elf, offset, SEEK_SET); //fseek(FILE *stream, long offset, int fromwhere); SEEK_CUR当前位置、 SEEK_END结束位置 或 SEEK_SET起始点
    int flag = fread(dest, size, 1, elf);
    assert( flag == 1);
}

static void get_str_from_file(FILE *elf, size_t offset, size_t n, void* dest){
    fseek(elf, offset, SEEK_SET);
    char* flag = fgets(dest, n, elf);
    assert(flag != NULL);
}

static int end;
static void append(char* func_name, uint64_t start, size_t size){
    strncpy(elf_funcs[end].func_name, func_name, sizeof(elf_funcs[0].func_name));
    elf_funcs[end].start = start;
    elf_funcs[end].size = size;
    end++;
}

void init_elf(const char* elf_file, paddr_t global_offset){
    FILE *elf = fopen(elf_file, "rb");
    assert(elf != NULL);
    Elf64_Ehdr elf_header;
    read_from_file(elf, global_offset + 0, sizeof(elf_header), &elf_header);

    Elf64_Off section_header_offset = elf_header.e_shoff;
    uint64_t headers_entry_size = elf_header.e_shentsize;
    uint64_t headers_entry_num = elf_header.e_shnum;

    assert(sizeof(Elf64_Shdr) == headers_entry_size);

    Elf64_Off symbol_table_offset = 0, string_table_offset = 0;
    size_t symbol_table_total_size = 0;
    size_t symbol_table_entry_size = 0;

    for(int i = 0; i < headers_entry_num; ++i) {
        Elf64_Shdr section_entry;
        read_from_file(elf, global_offset + i * headers_entry_size + section_header_offset, headers_entry_size, &section_entry);
        switch(section_entry.sh_type){
            case SHT_SYMTAB:
                symbol_table_offset = section_entry.sh_offset;
                symbol_table_total_size = section_entry.sh_size;
                symbol_table_entry_size = section_entry.sh_entsize;
            break;
            case SHT_STRTAB:
                if (i == elf_header.e_shstrndx){}else{
                    string_table_offset = section_entry.sh_offset;
                }
            break;
        }
    }

    char function_name[64];
    assert(symbol_table_entry_size == sizeof(Elf64_Sym));
    for(int i = 0; i < symbol_table_total_size / symbol_table_entry_size; ++i) {
        Elf64_Sym symbol_section_entry;
        read_from_file(elf, global_offset + i * symbol_table_entry_size + symbol_table_offset, symbol_table_entry_size, &symbol_section_entry);
        switch(ELF32_ST_TYPE(symbol_section_entry.st_info)){
            case STT_FUNC:
            get_str_from_file(elf, global_offset + string_table_offset + symbol_section_entry.st_name, 
                sizeof(function_name), function_name);
            append(function_name, symbol_section_entry.st_value, symbol_section_entry.st_size);  
            break;
        }
    }
    fclose(elf);
    printf("====== Symbol Table ======\n");
    for (int i = 0; i < end; ++i){
        func_info *info = &elf_funcs[i];
        printf("Func: %12s | Start: %#x | Size: %ld\n", info->func_name, 
        info->start, info->size);
    }
}




func_info* check_func(paddr_t addr){
    for (int i = 0; i < end; ++i){
        func_info *info = &elf_funcs[i];
        if (addr >= info->start && addr < info->start + info->size){
            return info;
        }
    }
    return NULL;
}
