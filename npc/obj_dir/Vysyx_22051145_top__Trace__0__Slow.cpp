// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22051145_top__Syms.h"


VL_ATTR_COLD void Vysyx_22051145_top___024root__trace_init_sub__TOP__0(Vysyx_22051145_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051145_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051145_top___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+498,"clk", false,-1);
    tracep->declBit(c+499,"rst", false,-1);
    tracep->pushNamePrefix("ysyx_22051145_top ");
    tracep->declBit(c+498,"clk", false,-1);
    tracep->declBit(c+499,"rst", false,-1);
    tracep->declQuad(c+85,"pc_now", false,-1, 63,0);
    tracep->declQuad(c+2,"pc_next", false,-1, 63,0);
    tracep->declBit(c+500,"read_req", false,-1);
    tracep->declQuad(c+85,"inst_addr_if", false,-1, 63,0);
    tracep->declBus(c+87,"inst_data_if", false,-1, 31,0);
    tracep->declBus(c+1,"trap_bus_if", false,-1, 18,0);
    tracep->declBit(c+88,"ram_stall_valid_if", false,-1);
    tracep->declQuad(c+89,"inst_addr_if_id", false,-1, 63,0);
    tracep->declBus(c+91,"inst_data_if_id", false,-1, 31,0);
    tracep->declBus(c+92,"trap_bus_if_id", false,-1, 18,0);
    tracep->declBus(c+93,"rs1_idx_id", false,-1, 4,0);
    tracep->declBus(c+94,"rs2_idx_id", false,-1, 4,0);
    tracep->declBus(c+95,"rd_idx_id", false,-1, 4,0);
    tracep->declBus(c+96,"csr_idx_id", false,-1, 11,0);
    tracep->declQuad(c+97,"rs1_data_id", false,-1, 63,0);
    tracep->declQuad(c+99,"rs2_data_id", false,-1, 63,0);
    tracep->declQuad(c+101,"csr_data_id", false,-1, 63,0);
    tracep->declQuad(c+103,"csr_imm_id", false,-1, 63,0);
    tracep->declBit(c+105,"csr_imm_valid_id", false,-1);
    tracep->declQuad(c+106,"imm_data_id", false,-1, 63,0);
    tracep->declBus(c+108,"alu_op_id", false,-1, 5,0);
    tracep->declBus(c+109,"mem_op_id", false,-1, 3,0);
    tracep->declBus(c+110,"csr_op_id", false,-1, 2,0);
    tracep->declBus(c+111,"exc_op_id", false,-1, 4,0);
    tracep->declBus(c+502,"pc_op_id", false,-1, 3,0);
    tracep->declQuad(c+89,"pc_id", false,-1, 63,0);
    tracep->declBus(c+91,"inst_id", false,-1, 31,0);
    tracep->declBit(c+112,"load_use_id", false,-1);
    tracep->declBus(c+113,"trap_bus_id", false,-1, 18,0);
    tracep->declQuad(c+114,"pc_id_ex", false,-1, 63,0);
    tracep->declBus(c+116,"inst_id_ex", false,-1, 31,0);
    tracep->declBus(c+117,"rs1_idx_id_ex", false,-1, 4,0);
    tracep->declBus(c+118,"rs2_idx_id_ex", false,-1, 4,0);
    tracep->declBus(c+119,"rd_idx_id_ex", false,-1, 4,0);
    tracep->declBus(c+120,"csr_idx_id_ex", false,-1, 11,0);
    tracep->declQuad(c+121,"imm_data_id_ex", false,-1, 63,0);
    tracep->declQuad(c+123,"csr_imm_id_ex", false,-1, 63,0);
    tracep->declBit(c+125,"csr_imm_valid_id_ex", false,-1);
    tracep->declQuad(c+126,"rs1_data_id_ex", false,-1, 63,0);
    tracep->declQuad(c+128,"rs2_data_id_ex", false,-1, 63,0);
    tracep->declQuad(c+130,"csr_data_id_ex", false,-1, 63,0);
    tracep->declBus(c+132,"alu_op_id_ex", false,-1, 5,0);
    tracep->declBus(c+133,"mem_op_id_ex", false,-1, 3,0);
    tracep->declBus(c+134,"csr_op_id_ex", false,-1, 2,0);
    tracep->declBus(c+135,"exc_op_id_ex", false,-1, 4,0);
    tracep->declBus(c+136,"pc_op_id_ex", false,-1, 3,0);
    tracep->declBus(c+137,"trap_bus_id_ex", false,-1, 18,0);
    tracep->declQuad(c+114,"pc_ex", false,-1, 63,0);
    tracep->declBus(c+116,"inst_data_ex", false,-1, 31,0);
    tracep->declBus(c+119,"rd_idx_ex", false,-1, 4,0);
    tracep->declQuad(c+126,"rs1_data_ex", false,-1, 63,0);
    tracep->declQuad(c+128,"rs2_data_ex", false,-1, 63,0);
    tracep->declQuad(c+121,"imm_data_ex", false,-1, 63,0);
    tracep->declQuad(c+130,"csr_data_ex", false,-1, 63,0);
    tracep->declQuad(c+123,"csr_imm_ex", false,-1, 63,0);
    tracep->declBit(c+125,"csr_imm_valid_ex", false,-1);
    tracep->declBus(c+133,"mem_op_ex", false,-1, 3,0);
    tracep->declBus(c+136,"pc_op_ex", false,-1, 3,0);
    tracep->declBus(c+120,"exc_csr_idx_ex", false,-1, 11,0);
    tracep->declQuad(c+138,"exc_alu_data_ex", false,-1, 63,0);
    tracep->declQuad(c+140,"exc_csr_data_ex", false,-1, 63,0);
    tracep->declBit(c+142,"exc_csr_valid_ex", false,-1);
    tracep->declBus(c+135,"exc_op_ex", false,-1, 4,0);
    tracep->declQuad(c+143,"branch_pc_ex", false,-1, 63,0);
    tracep->declBit(c+145,"branch_pc_valid_ex", false,-1);
    tracep->declBit(c+145,"jump_hazard_valid_ex", false,-1);
    tracep->declBus(c+146,"trap_bus_ex", false,-1, 18,0);
    tracep->declQuad(c+147,"pc_ex_mem", false,-1, 63,0);
    tracep->declBus(c+149,"inst_data_ex_mem", false,-1, 31,0);
    tracep->declQuad(c+150,"imm_data_ex_mem", false,-1, 63,0);
    tracep->declBus(c+152,"rd_idx_ex_mem", false,-1, 4,0);
    tracep->declQuad(c+153,"rs1_data_ex_mem", false,-1, 63,0);
    tracep->declQuad(c+155,"rs2_data_ex_mem", false,-1, 63,0);
    tracep->declQuad(c+157,"alu_data_ex_mem", false,-1, 63,0);
    tracep->declQuad(c+159,"csr_data_ex_mem", false,-1, 63,0);
    tracep->declBit(c+161,"csr_valid_ex_mem", false,-1);
    tracep->declBus(c+162,"csr_idx_ex_mem", false,-1, 11,0);
    tracep->declBus(c+163,"pc_op_ex_mem", false,-1, 3,0);
    tracep->declBus(c+164,"mem_op_ex_mem", false,-1, 3,0);
    tracep->declBus(c+165,"trap_bus_ex_mem", false,-1, 18,0);
    tracep->declQuad(c+147,"pc_mem", false,-1, 63,0);
    tracep->declBus(c+149,"inst_data_mem", false,-1, 31,0);
    tracep->declBus(c+166,"mem_addr_mem", false,-1, 31,0);
    tracep->declBit(c+167,"mem_addr_valid_mem", false,-1);
    tracep->declBus(c+168,"mem_mask_mem", false,-1, 7,0);
    tracep->declBit(c+169,"mem_write_valid_mem", false,-1);
    tracep->declQuad(c+170,"mem_wdata_mem", false,-1, 63,0);
    tracep->declBit(c+167,"ram_stall_valid_mem", false,-1);
    tracep->declBus(c+152,"rd_idx_mem", false,-1, 4,0);
    tracep->declQuad(c+172,"mem_data_mem", false,-1, 63,0);
    tracep->declBus(c+162,"csr_idx_mem", false,-1, 11,0);
    tracep->declQuad(c+159,"exc_csr_data_mem", false,-1, 63,0);
    tracep->declBit(c+161,"exc_csr_valid_mem", false,-1);
    tracep->declBus(c+174,"trap_bus_mem", false,-1, 18,0);
    tracep->declQuad(c+503,"csr_mstatus_writedata_clint", false,-1, 63,0);
    tracep->declQuad(c+147,"csr_mepc_writedata_clint", false,-1, 63,0);
    tracep->declQuad(c+505,"csr_mcause_writedata_clint", false,-1, 63,0);
    tracep->declQuad(c+175,"csr_mtval_writedata_clint", false,-1, 63,0);
    tracep->declQuad(c+507,"csr_mtvec_writedata_clint", false,-1, 63,0);
    tracep->declBit(c+509,"csr_mstatus_write_valid_clint", false,-1);
    tracep->declBit(c+177,"csr_mepc_write_valid_clint", false,-1);
    tracep->declBit(c+177,"csr_mcause_write_valid_clint", false,-1);
    tracep->declBit(c+177,"csr_mtval_write_valid_clint", false,-1);
    tracep->declBit(c+510,"csr_mtvec_write_valid_clint", false,-1);
    tracep->declQuad(c+178,"pc_clint", false,-1, 63,0);
    tracep->declBit(c+180,"pc_valid_clint", false,-1);
    tracep->declBus(c+4,"stall_clint", false,-1, 5,0);
    tracep->declBus(c+5,"flush_clint", false,-1, 5,0);
    tracep->declQuad(c+181,"csr_mstatus_writedata_mem_wb", false,-1, 63,0);
    tracep->declQuad(c+183,"csr_mepc_writedata_mem_wb", false,-1, 63,0);
    tracep->declQuad(c+185,"csr_mcause_writedata_mem_wb", false,-1, 63,0);
    tracep->declQuad(c+187,"csr_mtval_writedata_mem_wb", false,-1, 63,0);
    tracep->declQuad(c+189,"csr_mtvec_writedata_mem_wb", false,-1, 63,0);
    tracep->declBit(c+191,"csr_mstatus_write_valid_mem_wb", false,-1);
    tracep->declBit(c+192,"csr_mepc_write_valid_mem_wb", false,-1);
    tracep->declBit(c+193,"csr_mcause_write_valid_mem_wb", false,-1);
    tracep->declBit(c+194,"csr_mtval_write_valid_mem_wb", false,-1);
    tracep->declBit(c+195,"csr_mtvec_write_valid_mem_wb", false,-1);
    tracep->declQuad(c+196,"pc_mem_wb", false,-1, 63,0);
    tracep->declBus(c+198,"inst_data_mem_wb", false,-1, 31,0);
    tracep->declBus(c+199,"csr_idx_mem_wb", false,-1, 11,0);
    tracep->declQuad(c+200,"exc_csr_data_mem_wb", false,-1, 63,0);
    tracep->declBit(c+202,"exc_csr_valid_mem_wb", false,-1);
    tracep->declBus(c+203,"rd_idx_mem_wb", false,-1, 4,0);
    tracep->declQuad(c+204,"mem_data_mem_wb", false,-1, 63,0);
    tracep->declQuad(c+206,"rs1_data_gpr", false,-1, 63,0);
    tracep->declQuad(c+208,"rs2_data_gpr", false,-1, 63,0);
    tracep->declQuad(c+210,"csr_mstatus_readdata_csr", false,-1, 63,0);
    tracep->declQuad(c+212,"csr_mepc_readdata_csr", false,-1, 63,0);
    tracep->declQuad(c+214,"csr_mcause_readdata_csr", false,-1, 63,0);
    tracep->declQuad(c+216,"csr_mtval_readdata_csr", false,-1, 63,0);
    tracep->declQuad(c+218,"csr_mtvec_readdata_csr", false,-1, 63,0);
    tracep->declQuad(c+101,"csr_data_csr", false,-1, 63,0);
    tracep->declQuad(c+220,"if_rdata_icache", false,-1, 63,0);
    tracep->declBit(c+222,"if_rdata_valid_icache", false,-1);
    tracep->declBus(c+223,"ram_raddr_icache", false,-1, 31,0);
    tracep->declBit(c+224,"ram_raddr_valid_icache", false,-1);
    tracep->declBus(c+225,"ram_rmask_icache", false,-1, 7,0);
    tracep->declQuad(c+226,"mem_rdata_dcache", false,-1, 63,0);
    tracep->declBit(c+228,"mem_data_ready_dcache", false,-1);
    tracep->declBus(c+229,"ram_raddr_dcache", false,-1, 31,0);
    tracep->declBit(c+230,"ram_raddr_valid_dcache", false,-1);
    tracep->declBus(c+231,"ram_rmask_dcache", false,-1, 7,0);
    tracep->declBus(c+232,"ram_waddr_dcache", false,-1, 31,0);
    tracep->declBit(c+233,"ram_waddr_valid_dcache", false,-1);
    tracep->declBus(c+234,"ram_wmask_dcache", false,-1, 7,0);
    tracep->declQuad(c+235,"ram_wdata_dcache", false,-1, 63,0);
    tracep->declQuad(c+237,"mem_rdata_ram", false,-1, 63,0);
    tracep->declBit(c+239,"mem_rdata_valid_ram", false,-1);
    tracep->declBit(c+240,"mem_wdata_ready_ram", false,-1);
    tracep->declBit(c+241,"if_rdata_valid_ram", false,-1);
    tracep->declQuad(c+242,"if_rdata_ram", false,-1, 63,0);
    tracep->pushNamePrefix("ysyx_22051145_clint ");
    tracep->declBit(c+499,"rst", false,-1);
    tracep->declQuad(c+147,"pc_i", false,-1, 63,0);
    tracep->declBus(c+149,"inst_data_i", false,-1, 31,0);
    tracep->declBus(c+174,"trap_bus_i", false,-1, 18,0);
    tracep->declBit(c+88,"ram_stall_valid_if_i", false,-1);
    tracep->declBit(c+167,"ram_stall_valid_mem_i", false,-1);
    tracep->declBit(c+112,"load_use_valid_id_i", false,-1);
    tracep->declBit(c+145,"jump_valid_ex_i", false,-1);
    tracep->declQuad(c+210,"csr_mstatus_readdata_i", false,-1, 63,0);
    tracep->declQuad(c+212,"csr_mepc_readdata_i", false,-1, 63,0);
    tracep->declQuad(c+214,"csr_mcause_readdata_i", false,-1, 63,0);
    tracep->declQuad(c+216,"csr_mtval_readdata_i", false,-1, 63,0);
    tracep->declQuad(c+218,"csr_mtvec_readdata_i", false,-1, 63,0);
    tracep->declQuad(c+503,"csr_mstatus_writedata_o", false,-1, 63,0);
    tracep->declQuad(c+147,"csr_mepc_writedata_o", false,-1, 63,0);
    tracep->declQuad(c+505,"csr_mcause_writedata_o", false,-1, 63,0);
    tracep->declQuad(c+175,"csr_mtval_writedata_o", false,-1, 63,0);
    tracep->declQuad(c+507,"csr_mtvec_writedata_o", false,-1, 63,0);
    tracep->declBit(c+509,"csr_mstatus_write_valid_o", false,-1);
    tracep->declBit(c+177,"csr_mepc_write_valid_o", false,-1);
    tracep->declBit(c+177,"csr_mcause_write_valid_o", false,-1);
    tracep->declBit(c+177,"csr_mtval_write_valid_o", false,-1);
    tracep->declBit(c+510,"csr_mtvec_write_valid_o", false,-1);
    tracep->declQuad(c+178,"clint_pc_o", false,-1, 63,0);
    tracep->declBit(c+180,"clint_pc_valid_o", false,-1);
    tracep->declBus(c+4,"stall_o", false,-1, 5,0);
    tracep->declBus(c+5,"flush_o", false,-1, 5,0);
    tracep->declBus(c+511,"load_use_flush", false,-1, 5,0);
    tracep->declBus(c+512,"load_use_stall", false,-1, 5,0);
    tracep->declBus(c+513,"jump_flush", false,-1, 5,0);
    tracep->declBus(c+514,"jump_stall", false,-1, 5,0);
    tracep->declBus(c+515,"trap_flush", false,-1, 5,0);
    tracep->declBus(c+514,"trap_stall", false,-1, 5,0);
    tracep->declBus(c+516,"ram_if_flush", false,-1, 5,0);
    tracep->declBus(c+517,"ram_if_stall", false,-1, 5,0);
    tracep->declBus(c+516,"ram_mem_flush", false,-1, 5,0);
    tracep->declBus(c+517,"ram_mem_stall", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_22051145_dcache ");
    tracep->declBit(c+498,"clk", false,-1);
    tracep->declBit(c+499,"rst", false,-1);
    tracep->declBus(c+166,"mem_addr_i", false,-1, 31,0);
    tracep->declBus(c+168,"mem_mask_i", false,-1, 7,0);
    tracep->declBit(c+167,"mem_addr_valid_i", false,-1);
    tracep->declBit(c+169,"mem_write_valid_i", false,-1);
    tracep->declQuad(c+170,"mem_wdata_i", false,-1, 63,0);
    tracep->declQuad(c+226,"mem_rdata_o", false,-1, 63,0);
    tracep->declBit(c+228,"mem_data_ready_o", false,-1);
    tracep->declBus(c+229,"ram_raddr_dcache_o", false,-1, 31,0);
    tracep->declBit(c+230,"ram_raddr_valid_dcache_o", false,-1);
    tracep->declBus(c+231,"ram_rmask_dcache_o", false,-1, 7,0);
    tracep->declBit(c+239,"ram_rdata_ready_dcache_i", false,-1);
    tracep->declQuad(c+237,"ram_rdata_dcache_i", false,-1, 63,0);
    tracep->declBus(c+232,"ram_waddr_dcache_o", false,-1, 31,0);
    tracep->declBit(c+233,"ram_waddr_valid_dcache_o", false,-1);
    tracep->declBus(c+234,"ram_wmask_dcache_o", false,-1, 7,0);
    tracep->declBit(c+240,"ram_wdata_ready_dcache_i", false,-1);
    tracep->declQuad(c+235,"ram_wdata_dcache_o", false,-1, 63,0);
    tracep->declBit(c+244,"uncache", false,-1);
    tracep->declBus(c+245,"cache_blk_addr", false,-1, 3,0);
    tracep->declBus(c+246,"cache_line_idx", false,-1, 8,4);
    tracep->declBus(c+247,"cache_line_tag", false,-1, 31,9);
    tracep->declBit(c+248,"dcache_hit", false,-1);
    tracep->declBus(c+502,"CACHE_RST", false,-1, 3,0);
    tracep->declBus(c+518,"CACHE_IDLE", false,-1, 3,0);
    tracep->declBus(c+519,"CACHE_READ_HIT", false,-1, 3,0);
    tracep->declBus(c+520,"CACHE_READ_MISS", false,-1, 3,0);
    tracep->declBus(c+521,"CACHE_READ_MISS2", false,-1, 3,0);
    tracep->declBus(c+522,"CACHE_WRITE_HIT1", false,-1, 3,0);
    tracep->declBus(c+523,"CACHE_WRITE_HIT2", false,-1, 3,0);
    tracep->declBus(c+524,"CACHE_WRITE_MISS", false,-1, 3,0);
    tracep->declBus(c+525,"CACHE_WRITE_MISS2", false,-1, 3,0);
    tracep->declBus(c+526,"UNCACHE_READ", false,-1, 3,0);
    tracep->declBus(c+527,"UNCACHE_WRITE", false,-1, 3,0);
    tracep->declBus(c+249,"dcahce_state", false,-1, 3,0);
    tracep->declBus(c+250,"blk_addr_reg", false,-1, 3,0);
    tracep->declBus(c+251,"line_idx_reg", false,-1, 4,0);
    tracep->declBus(c+252,"line_tag_reg", false,-1, 22,0);
    tracep->declBit(c+253,"dcache_tag_wen", false,-1);
    tracep->declBit(c+254,"dcahce_rdata_ok", false,-1);
    tracep->declArray(c+255,"cache_line_temp", false,-1, 127,0);
    tracep->declQuad(c+259,"uncache_rdata", false,-1, 63,0);
    tracep->declBit(c+261,"dcache_data_wen", false,-1);
    tracep->declArray(c+262,"dcache_wmask_temp", false,-1, 127,0);
    tracep->declArray(c+266,"dcache_wmask", false,-1, 127,0);
    tracep->declQuad(c+270,"wmask_bit", false,-1, 63,0);
    tracep->declBus(c+272,"addr_last3", false,-1, 2,0);
    tracep->declArray(c+273,"dcache_line_rdata", false,-1, 127,0);
    tracep->pushNamePrefix("u_dcache_data ");
    tracep->declBus(c+528,"IDX_LEN", false,-1, 31,0);
    tracep->declBus(c+529,"BLK_LEN", false,-1, 31,0);
    tracep->declBus(c+530,"TAG_NUM", false,-1, 31,0);
    tracep->declBit(c+498,"clk", false,-1);
    tracep->declBit(c+499,"rst", false,-1);
    tracep->declBus(c+246,"dcache_index_i", false,-1, 4,0);
    tracep->declBus(c+245,"dcache_blk_addr_i", false,-1, 3,0);
    tracep->declArray(c+255,"dcache_line_wdata_i", false,-1, 127,0);
    tracep->declArray(c+266,"dcache_wmask", false,-1, 127,0);
    tracep->declBit(c+261,"dcache_wen_i", false,-1);
    tracep->declArray(c+273,"dcache_line_rdata_o", false,-1, 127,0);
    tracep->pushNamePrefix("u_S011HD1P_X32Y2D128_BW ");
    tracep->declBus(c+531,"Bits", false,-1, 31,0);
    tracep->declBus(c+532,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+533,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+531,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+273,"Q", false,-1, 127,0);
    tracep->declBit(c+498,"CLK", false,-1);
    tracep->declBit(c+534,"CEN", false,-1);
    tracep->declBit(c+277,"WEN", false,-1);
    tracep->declArray(c+278,"BWEN", false,-1, 127,0);
    tracep->declBus(c+282,"A", false,-1, 5,0);
    tracep->declArray(c+255,"D", false,-1, 127,0);
    tracep->declBit(c+535,"cen", false,-1);
    tracep->declBit(c+261,"wen", false,-1);
    tracep->declArray(c+266,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_dcache_tag ");
    tracep->declBus(c+536,"TAG_LEN", false,-1, 31,0);
    tracep->declBus(c+528,"IDX_LEN", false,-1, 31,0);
    tracep->declBus(c+530,"TAG_NUM", false,-1, 31,0);
    tracep->declBit(c+498,"clk", false,-1);
    tracep->declBit(c+499,"rst", false,-1);
    tracep->declBus(c+247,"dcache_tag_i", false,-1, 22,0);
    tracep->declBus(c+246,"dcache_index_i", false,-1, 4,0);
    tracep->declBit(c+253,"write_valid_i", false,-1);
    tracep->declBit(c+248,"dcache_hit_o", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+283+i*1,"dcache_tag_regs", true,(i+0), 22,0);
    }
    tracep->declBus(c+315,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ysyx_22051145_decode ");
    tracep->declQuad(c+89,"inst_addr_i", false,-1, 63,0);
    tracep->declBus(c+91,"inst_data_i", false,-1, 31,0);
    tracep->declBus(c+92,"trap_bus_i", false,-1, 18,0);
    tracep->declQuad(c+206,"rs1_data_i", false,-1, 63,0);
    tracep->declQuad(c+208,"rs2_data_i", false,-1, 63,0);
    tracep->declQuad(c+101,"csr_data_i", false,-1, 63,0);
    tracep->declBus(c+135,"id_ex_exc_op_i", false,-1, 4,0);
    tracep->declQuad(c+138,"ex_rd_data_i", false,-1, 63,0);
    tracep->declBus(c+119,"ex_rd_addr_i", false,-1, 4,0);
    tracep->declQuad(c+172,"mem_rd_data_i", false,-1, 63,0);
    tracep->declBus(c+152,"mem_rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+93,"rs1_idx_o", false,-1, 4,0);
    tracep->declBus(c+94,"rs2_idx_o", false,-1, 4,0);
    tracep->declBus(c+95,"rd_idx_o", false,-1, 4,0);
    tracep->declQuad(c+97,"rs1_data_o", false,-1, 63,0);
    tracep->declQuad(c+99,"rs2_data_o", false,-1, 63,0);
    tracep->declQuad(c+106,"imm_data_o", false,-1, 63,0);
    tracep->declQuad(c+103,"csr_imm_o", false,-1, 63,0);
    tracep->declBit(c+105,"csr_imm_valid_o", false,-1);
    tracep->declBus(c+96,"csr_idx_o", false,-1, 11,0);
    tracep->declQuad(c+101,"csr_readdata_o", false,-1, 63,0);
    tracep->declBus(c+108,"alu_op_o", false,-1, 5,0);
    tracep->declBus(c+109,"mem_op_o", false,-1, 3,0);
    tracep->declBus(c+111,"exc_op_o", false,-1, 4,0);
    tracep->declBus(c+502,"pc_op_o", false,-1, 3,0);
    tracep->declBus(c+110,"csr_op_o", false,-1, 2,0);
    tracep->declQuad(c+89,"inst_addr_o", false,-1, 63,0);
    tracep->declBus(c+91,"inst_data_o", false,-1, 31,0);
    tracep->declBit(c+112,"load_use_valid_o", false,-1);
    tracep->declBus(c+113,"trap_bus_o", false,-1, 18,0);
    tracep->declBus(c+537,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_22051145_ex_mem ");
    tracep->declBit(c+498,"clk", false,-1);
    tracep->declBit(c+499,"rst", false,-1);
    tracep->declBus(c+5,"flush_valid_i", false,-1, 5,0);
    tracep->declBus(c+4,"stall_valid_i", false,-1, 5,0);
    tracep->declQuad(c+114,"pc_ex_mem_i", false,-1, 63,0);
    tracep->declBus(c+116,"inst_data_ex_mem_i", false,-1, 31,0);
    tracep->declQuad(c+121,"imm_data_ex_mem_i", false,-1, 63,0);
    tracep->declBus(c+119,"rd_idx_ex_mem_i", false,-1, 4,0);
    tracep->declQuad(c+126,"rs1_data_ex_mem_i", false,-1, 63,0);
    tracep->declQuad(c+128,"rs2_data_ex_mem_i", false,-1, 63,0);
    tracep->declQuad(c+138,"alu_data_ex_mem_i", false,-1, 63,0);
    tracep->declQuad(c+140,"csr_writedata_ex_mem_i", false,-1, 63,0);
    tracep->declBit(c+142,"csr_writevalid_ex_mem_i", false,-1);
    tracep->declBus(c+120,"csr_addr_ex_mem_i", false,-1, 11,0);
    tracep->declBus(c+136,"pc_op_ex_mem_i", false,-1, 3,0);
    tracep->declBus(c+133,"mem_op_ex_mem_i", false,-1, 3,0);
    tracep->declBus(c+146,"trap_bus_ex_mem_i", false,-1, 18,0);
    tracep->declQuad(c+147,"pc_ex_mem_o", false,-1, 63,0);
    tracep->declBus(c+149,"inst_data_ex_mem_o", false,-1, 31,0);
    tracep->declQuad(c+150,"imm_data_ex_mem_o", false,-1, 63,0);
    tracep->declBus(c+152,"rd_idx_ex_mem_o", false,-1, 4,0);
    tracep->declQuad(c+153,"rs1_data_ex_mem_o", false,-1, 63,0);
    tracep->declQuad(c+155,"rs2_data_ex_mem_o", false,-1, 63,0);
    tracep->declQuad(c+157,"alu_data_ex_mem_o", false,-1, 63,0);
    tracep->declQuad(c+159,"csr_writedata_ex_mem_o", false,-1, 63,0);
    tracep->declBit(c+161,"csr_writevalid_ex_mem_o", false,-1);
    tracep->declBus(c+162,"csr_addr_ex_mem_o", false,-1, 11,0);
    tracep->declBus(c+163,"pc_op_ex_mem_o", false,-1, 3,0);
    tracep->declBus(c+164,"mem_op_ex_mem_o", false,-1, 3,0);
    tracep->declBus(c+165,"trap_bus_ex_mem_o", false,-1, 18,0);
    tracep->declBit(c+6,"reg_wen", false,-1);
    tracep->pushNamePrefix("u_alu_data_ex_mem_id ");
    tracep->declBus(c+532,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+538,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+498,"clk", false,-1);
    tracep->declBit(c+499,"rst", false,-1);
    tracep->declQuad(c+7,"din", false,-1, 63,0);
    tracep->declQuad(c+157,"dout", false,-1, 63,0);
    tracep->declBit(c+6,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_csr_addr_ex_mem_id ");
    tracep->declBus(c+540,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+541,"RESET_VAL", false,-1, 11,0);
    tracep->declBit(c+498,"clk", false,-1);
    tracep->declBit(c+499,"rst", false,-1);
    tracep->declBus(c+9,"din", false,-1, 11,0);
    tracep->declBus(c+162,"dout", false,-1, 11,0);
    tracep->declBit(c+6,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_csr_writedata_ex_mem_id ");
    tracep->declBus(c+532,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+538,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+498,"clk", false,-1);
    tracep->declBit(c+499,"rst", false,-1);
    tracep->declQuad(c+10,"din", false,-1, 63,0);
    tracep->declQuad(c+159,"dout", false,-1, 63,0);
    tracep->declBit(c+6,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_csr_writevalid_ex_mem_id ");
    tracep->declBus(c+542,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+543,"RESET_VAL", false,-1, 0,0);
    tracep->declBit(c+498,"clk", false,-1);
    tracep->declBit(c+499,"rst", false,-1);
    tracep->declBus(c+12,"din", false,-1, 0,0);
    tracep->declBus(c+161,"dout", false,-1, 0,0);
    tracep->declBit(c+6,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_imm_data_ex_mem_id ");
    tracep->declBus(c+532,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+538,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+498,"clk", false,-1);
    tracep->declBit(c+499,"rst", false,-1);
    tracep->declQuad(c+13,"din", false,-1, 63,0);
    tracep->declQuad(c+150,"dout", false,-1, 63,0);
    tracep->declBit(c+6,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_inst_data_ex_mem_id ");
    tracep->declBus(c+530,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+544,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+498,"clk", false,-1);
    tracep->declBit(c+499,"rst", false,-1);
    tracep->declBus(c+15,"din", false,-1, 31,0);
    tracep->declBus(c+149,"dout", false,-1, 31,0);
    tracep->declBit(c+6,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_mem_op_ex_mem_id ");
    tracep->declBus(c+529,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+502,"RESET_VAL", false,-1, 3,0);
    tracep->declBit(c+498,"clk", false,-1);
    tracep->declBit(c+499,"rst", false,-1);
    tracep->declBus(c+16,"din", false,-1, 3,0);
    tracep->declBus(c+164,"dout", false,-1, 3,0);
    tracep->declBit(c+6,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_pc_ex_mem_id ");
    tracep->declBus(c+532,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+538,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+498,"clk", false,-1);
    tracep->declBit(c+499,"rst", false,-1);
    tracep->declQuad(c+17,"din", false,-1, 63,0);
    tracep->declQuad(c+147,"dout", false,-1, 63,0);
    tracep->declBit(c+6,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_pc_op_ex_mem_id ");
    tracep->declBus(c+529,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+502,"RESET_VAL", false,-1, 3,0);
    tracep->declBit(c+498,"clk", false,-1);
    tracep->declBit(c+499,"rst", false,-1);
    tracep->declBus(c+19,"din", false,-1, 3,0);
    tracep->declBus(c+163,"dout", false,-1, 3,0);
    tracep->declBit(c+6,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rd_idx_ex_mem_id ");
    tracep->declBus(c+528,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+545,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+498,"clk", false,-1);
    tracep->declBit(c+499,"rst", false,-1);
    tracep->declBus(c+20,"din", false,-1, 4,0);
    tracep->declBus(c+152,"dout", false,-1, 4,0);
    tracep->declBit(c+6,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rs1_data_ex_mem_id ");
    tracep->declBus(c+532,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+538,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+498,"clk", false,-1);
    tracep->declBit(c+499,"rst", false,-1);
    tracep->declQuad(c+21,"din", false,-1, 63,0);
    tracep->declQuad(c+153,"dout", false,-1, 63,0);
    tracep->declBit(c+6,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rs2_data_ex_mem_id ");
    tracep->declBus(c+532,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+538,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+498,"clk", false,-1);
    tracep->declBit(c+499,"rst", false,-1);
    tracep->declQuad(c+23,"din", false,-1, 63,0);
    tracep->declQuad(c+155,"dout", false,-1, 63,0);
    tracep->declBit(c+6,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_trap_bus_ex_mem_id ");
    tracep->declBus(c+544,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+546,"RESET_VAL", false,-1, 18,0);
    tracep->declBit(c+498,"clk", false,-1);
    tracep->declBit(c+499,"rst", false,-1);
    tracep->declBus(c+25,"din", false,-1, 18,0);
    tracep->declBus(c+165,"dout", false,-1, 18,0);
    tracep->declBit(c+6,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ysyx_22051145_execute ");
    tracep->declQuad(c+114,"pc_i", false,-1, 63,0);
    tracep->declBus(c+116,"inst_data_i", false,-1, 31,0);
    tracep->declBus(c+119,"rd_idx_i", false,-1, 4,0);
    tracep->declQuad(c+126,"rs1_data_i", false,-1, 63,0);
    tracep->declQuad(c+128,"rs2_data_i", false,-1, 63,0);
    tracep->declQuad(c+121,"imm_data_i", false,-1, 63,0);
    tracep->declBus(c+120,"csr_readaddr_i", false,-1, 11,0);
    tracep->declQuad(c+130,"csr_data_i", false,-1, 63,0);
    tracep->declQuad(c+123,"csr_imm_i", false,-1, 63,0);
    tracep->declBit(c+125,"csr_imm_valid_i", false,-1);
    tracep->declBus(c+132,"alu_op_i", false,-1, 5,0);
    tracep->declBus(c+133,"mem_op_i", false,-1, 3,0);
    tracep->declBus(c+135,"exc_op_i", false,-1, 4,0);
    tracep->declBus(c+134,"csr_op_i", false,-1, 2,0);
    tracep->declBus(c+136,"pc_op_i", false,-1, 3,0);
    tracep->declBus(c+137,"trap_bus_i", false,-1, 18,0);
    tracep->declQuad(c+114,"pc_o", false,-1, 63,0);
    tracep->declBus(c+116,"inst_data_o", false,-1, 31,0);
    tracep->declBus(c+119,"rd_idx_o", false,-1, 4,0);
    tracep->declQuad(c+126,"rs1_data_o", false,-1, 63,0);
    tracep->declQuad(c+128,"rs2_data_o", false,-1, 63,0);
    tracep->declQuad(c+121,"imm_data_o", false,-1, 63,0);
    tracep->declQuad(c+130,"csr_data_o", false,-1, 63,0);
    tracep->declQuad(c+123,"csr_imm_o", false,-1, 63,0);
    tracep->declBit(c+125,"csr_imm_valid_o", false,-1);
    tracep->declBus(c+120,"exc_csr_addr_o", false,-1, 11,0);
    tracep->declBus(c+133,"mem_op_o", false,-1, 3,0);
    tracep->declBus(c+136,"pc_op_o", false,-1, 3,0);
    tracep->declQuad(c+138,"exc_alu_data_o", false,-1, 63,0);
    tracep->declQuad(c+140,"exc_csr_data_o", false,-1, 63,0);
    tracep->declBit(c+142,"exc_csr_valid_o", false,-1);
    tracep->declBus(c+135,"exc_op_o", false,-1, 4,0);
    tracep->declQuad(c+143,"branch_pc_o", false,-1, 63,0);
    tracep->declBit(c+145,"branch_pc_valid_o", false,-1);
    tracep->declBit(c+145,"jump_hazard_valid_o", false,-1);
    tracep->declBus(c+146,"trap_bus_o", false,-1, 18,0);
    tracep->declBus(c+537,"i", false,-1, 31,0);
    tracep->pushNamePrefix("u_alu ");
    tracep->declQuad(c+316,"alu_a_i", false,-1, 63,0);
    tracep->declQuad(c+318,"alu_b_i", false,-1, 63,0);
    tracep->declBus(c+132,"alu_op_i", false,-1, 5,0);
    tracep->declQuad(c+320,"alu_out_o", false,-1, 63,0);
    tracep->declBit(c+322,"compare_out_o", false,-1);
    tracep->pushNamePrefix("u_alu_div_top ");
    tracep->declBit(c+323,"signed_valid_i", false,-1);
    tracep->declBit(c+324,"div32_valid_i", false,-1);
    tracep->declQuad(c+316,"sr1_data_i", false,-1, 63,0);
    tracep->declQuad(c+318,"sr2_data_i", false,-1, 63,0);
    tracep->declQuad(c+325,"div_out_o", false,-1, 63,0);
    tracep->declQuad(c+327,"rem_out_o", false,-1, 63,0);
    tracep->declQuad(c+316,"sr1_64_signed", false,-1, 63,0);
    tracep->declQuad(c+318,"sr2_64_signed", false,-1, 63,0);
    tracep->declQuad(c+329,"div64_signed", false,-1, 63,0);
    tracep->declQuad(c+331,"rem64_signed", false,-1, 63,0);
    tracep->declQuad(c+333,"div64_unsigned", false,-1, 63,0);
    tracep->declQuad(c+335,"rem64_unsigned", false,-1, 63,0);
    tracep->declQuad(c+337,"div64_result", false,-1, 63,0);
    tracep->declQuad(c+339,"rem64_result", false,-1, 63,0);
    tracep->declBus(c+341,"sr1_32_signed", false,-1, 31,0);
    tracep->declBus(c+342,"sr2_32_signed", false,-1, 31,0);
    tracep->declBus(c+343,"div32_signed", false,-1, 31,0);
    tracep->declBus(c+344,"rem32_signed", false,-1, 31,0);
    tracep->declBus(c+345,"div32_unsigned", false,-1, 31,0);
    tracep->declBus(c+346,"rem32_unsigned", false,-1, 31,0);
    tracep->declBus(c+347,"div32_result", false,-1, 31,0);
    tracep->declBus(c+348,"rem32_result", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_alu_mul_top ");
    tracep->declBit(c+349,"rs1_signed_valid_i", false,-1);
    tracep->declBit(c+350,"rs2_signed_valid_i", false,-1);
    tracep->declQuad(c+316,"rs1_data_i", false,-1, 63,0);
    tracep->declQuad(c+318,"rs2_data_i", false,-1, 63,0);
    tracep->declArray(c+351,"mul_out_o", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_alu_shift ");
    tracep->declBit(c+355,"shift_sra_i", false,-1);
    tracep->declBit(c+356,"shift_srl_i", false,-1);
    tracep->declBit(c+357,"shift_sll_i", false,-1);
    tracep->declBit(c+358,"shift32_valid_i", false,-1);
    tracep->declQuad(c+316,"shift_num_i", false,-1, 63,0);
    tracep->declBus(c+359,"shift_count_i", false,-1, 5,0);
    tracep->declQuad(c+360,"shift_out_o", false,-1, 63,0);
    tracep->pushNamePrefix("u_Vectorinvert1 ");
    tracep->declBus(c+532,"DATA_LEN", false,-1, 31,0);
    tracep->declQuad(c+362,"in", false,-1, 63,0);
    tracep->declQuad(c+364,"out", false,-1, 63,0);
    tracep->declBus(c+547,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_Vectorinvert2 ");
    tracep->declBus(c+532,"DATA_LEN", false,-1, 31,0);
    tracep->declQuad(c+366,"in", false,-1, 63,0);
    tracep->declQuad(c+368,"out", false,-1, 63,0);
    tracep->declBus(c+547,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("u_execute_csr ");
    tracep->declQuad(c+123,"csr_imm_i", false,-1, 63,0);
    tracep->declBit(c+125,"csr_imm_valid_i", false,-1);
    tracep->declQuad(c+126,"rs1_data_i", false,-1, 63,0);
    tracep->declQuad(c+130,"csr_data_i", false,-1, 63,0);
    tracep->declBus(c+134,"csr_op_i", false,-1, 2,0);
    tracep->declQuad(c+140,"csr_exe_data_o", false,-1, 63,0);
    tracep->declBit(c+142,"csr_exe_data_valid_o", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ysyx_22051145_fetch ");
    tracep->declBit(c+499,"rst", false,-1);
    tracep->declQuad(c+85,"pc_now_i", false,-1, 63,0);
    tracep->declBit(c+222,"if_rdata_valid_i", false,-1);
    tracep->declQuad(c+220,"if_rdata_i", false,-1, 63,0);
    tracep->declBit(c+88,"ram_stall_valid_if_o", false,-1);
    tracep->declQuad(c+85,"inst_addr_o", false,-1, 63,0);
    tracep->declBus(c+87,"inst_data_o", false,-1, 31,0);
    tracep->declBus(c+1,"trap_bus_o", false,-1, 18,0);
    tracep->declBus(c+537,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_22051145_gpr ");
    tracep->declBit(c+498,"clk", false,-1);
    tracep->declBit(c+499,"rst", false,-1);
    tracep->declBus(c+93,"rs1_idx_i", false,-1, 4,0);
    tracep->declBus(c+94,"rs2_idx_i", false,-1, 4,0);
    tracep->declQuad(c+206,"rs1_data_o", false,-1, 63,0);
    tracep->declQuad(c+208,"rs2_data_o", false,-1, 63,0);
    tracep->declBus(c+203,"write_idx_i", false,-1, 4,0);
    tracep->declQuad(c+204,"write_data_i", false,-1, 63,0);
    tracep->declBit(c+535,"write_data_valid_i", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+370+i*2,"rf", true,(i+0), 63,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_22051145_icache_top ");
    tracep->declBit(c+498,"clk", false,-1);
    tracep->declBit(c+499,"rst", false,-1);
    tracep->declBus(c+26,"preif_raddr_i", false,-1, 31,0);
    tracep->declBus(c+548,"preif_rmask_i", false,-1, 7,0);
    tracep->declBit(c+500,"preif_raddr_valid_i", false,-1);
    tracep->declQuad(c+220,"if_rdata_o", false,-1, 63,0);
    tracep->declBit(c+222,"if_rdata_valid_o", false,-1);
    tracep->declBus(c+223,"ram_raddr_icache_o", false,-1, 31,0);
    tracep->declBit(c+224,"ram_raddr_valid_icache_o", false,-1);
    tracep->declBus(c+225,"ram_rmask_icache_o", false,-1, 7,0);
    tracep->declBit(c+241,"ram_rdata_ready_icache_i", false,-1);
    tracep->declQuad(c+242,"ram_rdata_icache_i", false,-1, 63,0);
    tracep->declBus(c+27,"cache_blk_addr", false,-1, 3,0);
    tracep->declBus(c+28,"cache_line_idx", false,-1, 8,4);
    tracep->declBus(c+29,"cache_line_tag", false,-1, 31,9);
    tracep->declBit(c+30,"icache_hit", false,-1);
    tracep->declBus(c+502,"CACHE_RST", false,-1, 3,0);
    tracep->declBus(c+518,"CACHE_IDLE", false,-1, 3,0);
    tracep->declBus(c+519,"CACHE_HIT", false,-1, 3,0);
    tracep->declBus(c+520,"CACHE_MISS", false,-1, 3,0);
    tracep->declBus(c+521,"CACHE_MISS2", false,-1, 3,0);
    tracep->declBus(c+434,"icahce_state", false,-1, 3,0);
    tracep->declBus(c+435,"blk_addr_reg", false,-1, 3,0);
    tracep->declBus(c+436,"line_idx_reg", false,-1, 4,0);
    tracep->declBus(c+437,"line_tag_reg", false,-1, 22,0);
    tracep->declBit(c+438,"icache_tag_wen", false,-1);
    tracep->declBit(c+439,"icahce_rdata_ok", false,-1);
    tracep->declArray(c+440,"cache_line_temp", false,-1, 127,0);
    tracep->declBit(c+444,"icache_data_wen", false,-1);
    tracep->declArray(c+445,"icache_line_rdata", false,-1, 127,0);
    tracep->declArray(c+549,"icache_wmask", false,-1, 127,0);
    tracep->pushNamePrefix("u_icache_data ");
    tracep->declBus(c+528,"IDX_LEN", false,-1, 31,0);
    tracep->declBus(c+529,"BLK_LEN", false,-1, 31,0);
    tracep->declBus(c+530,"TAG_NUM", false,-1, 31,0);
    tracep->declBit(c+498,"clk", false,-1);
    tracep->declBit(c+499,"rst", false,-1);
    tracep->declBus(c+28,"icache_index_i", false,-1, 4,0);
    tracep->declBus(c+27,"icache_blk_addr_i", false,-1, 3,0);
    tracep->declArray(c+440,"icache_line_wdata_i", false,-1, 127,0);
    tracep->declArray(c+549,"icache_wmask", false,-1, 127,0);
    tracep->declBit(c+444,"icache_wen_i", false,-1);
    tracep->declArray(c+445,"icache_line_rdata_o", false,-1, 127,0);
    tracep->pushNamePrefix("u_S011HD1P_X32Y2D128_BW ");
    tracep->declBus(c+531,"Bits", false,-1, 31,0);
    tracep->declBus(c+532,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+533,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+531,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+445,"Q", false,-1, 127,0);
    tracep->declBit(c+498,"CLK", false,-1);
    tracep->declBit(c+534,"CEN", false,-1);
    tracep->declBit(c+449,"WEN", false,-1);
    tracep->declArray(c+553,"BWEN", false,-1, 127,0);
    tracep->declBus(c+31,"A", false,-1, 5,0);
    tracep->declArray(c+440,"D", false,-1, 127,0);
    tracep->declBit(c+535,"cen", false,-1);
    tracep->declBit(c+444,"wen", false,-1);
    tracep->declArray(c+549,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_icache_tag ");
    tracep->declBus(c+536,"TAG_LEN", false,-1, 31,0);
    tracep->declBus(c+528,"IDX_LEN", false,-1, 31,0);
    tracep->declBus(c+530,"TAG_NUM", false,-1, 31,0);
    tracep->declBit(c+498,"clk", false,-1);
    tracep->declBit(c+499,"rst", false,-1);
    tracep->declBus(c+29,"icache_tag_i", false,-1, 22,0);
    tracep->declBus(c+28,"icache_index_i", false,-1, 4,0);
    tracep->declBit(c+438,"write_valid_i", false,-1);
    tracep->declBit(c+30,"icache_hit_o", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+450+i*1,"icache_tag_regs", true,(i+0), 22,0);
    }
    tracep->declBus(c+482,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ysyx_22051145_id_ex ");
    tracep->declBit(c+498,"clk", false,-1);
    tracep->declBit(c+499,"rst", false,-1);
    tracep->declBus(c+5,"flush_valid_i", false,-1, 5,0);
    tracep->declBus(c+4,"stall_valid_i", false,-1, 5,0);
    tracep->declQuad(c+89,"pc_id_ex_i", false,-1, 63,0);
    tracep->declBus(c+91,"inst_data_id_ex_i", false,-1, 31,0);
    tracep->declBus(c+93,"rs1_idx_id_ex_i", false,-1, 4,0);
    tracep->declBus(c+94,"rs2_idx_id_ex_i", false,-1, 4,0);
    tracep->declBus(c+95,"rd_idx_id_ex_i", false,-1, 4,0);
    tracep->declQuad(c+106,"imm_data_id_ex_i", false,-1, 63,0);
    tracep->declQuad(c+103,"csr_imm_id_ex_i", false,-1, 63,0);
    tracep->declBit(c+105,"csr_imm_valid_id_ex_i", false,-1);
    tracep->declQuad(c+97,"rs1_data_id_ex_i", false,-1, 63,0);
    tracep->declQuad(c+99,"rs2_data_id_ex_i", false,-1, 63,0);
    tracep->declQuad(c+101,"csr_data_id_ex_i", false,-1, 63,0);
    tracep->declBus(c+96,"csr_idx_id_ex_i", false,-1, 11,0);
    tracep->declBus(c+108,"alu_op_id_ex_i", false,-1, 5,0);
    tracep->declBus(c+109,"mem_op_id_ex_i", false,-1, 3,0);
    tracep->declBus(c+111,"exc_op_id_ex_i", false,-1, 4,0);
    tracep->declBus(c+502,"pc_op_id_ex_i", false,-1, 3,0);
    tracep->declBus(c+110,"csr_op_id_ex_i", false,-1, 2,0);
    tracep->declBus(c+113,"trap_bus_id_ex_i", false,-1, 18,0);
    tracep->declQuad(c+114,"pc_id_ex_o", false,-1, 63,0);
    tracep->declBus(c+116,"inst_data_id_ex_o", false,-1, 31,0);
    tracep->declBus(c+117,"rs1_idx_id_ex_o", false,-1, 4,0);
    tracep->declBus(c+118,"rs2_idx_id_ex_o", false,-1, 4,0);
    tracep->declBus(c+119,"rd_idx_id_ex_o", false,-1, 4,0);
    tracep->declQuad(c+121,"imm_data_id_ex_o", false,-1, 63,0);
    tracep->declQuad(c+123,"csr_imm_id_ex_o", false,-1, 63,0);
    tracep->declBit(c+125,"csr_imm_valid_id_ex_o", false,-1);
    tracep->declQuad(c+126,"rs1_data_id_ex_o", false,-1, 63,0);
    tracep->declQuad(c+128,"rs2_data_id_ex_o", false,-1, 63,0);
    tracep->declQuad(c+130,"csr_data_id_ex_o", false,-1, 63,0);
    tracep->declBus(c+120,"csr_idx_id_ex_o", false,-1, 11,0);
    tracep->declBus(c+132,"alu_op_id_ex_o", false,-1, 5,0);
    tracep->declBus(c+133,"mem_op_id_ex_o", false,-1, 3,0);
    tracep->declBus(c+135,"exc_op_id_ex_o", false,-1, 4,0);
    tracep->declBus(c+136,"pc_op_id_ex_o", false,-1, 3,0);
    tracep->declBus(c+134,"csr_op_id_ex_o", false,-1, 2,0);
    tracep->declBus(c+137,"trap_bus_id_ex_o", false,-1, 18,0);
    tracep->declBit(c+32,"reg_wen", false,-1);
    tracep->pushNamePrefix("u_alu_op_id_ex ");
    tracep->declBus(c+533,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+514,"RESET_VAL", false,-1, 5,0);
    tracep->declBit(c+498,"clk", false,-1);
    tracep->declBit(c+499,"rst", false,-1);
    tracep->declBus(c+33,"din", false,-1, 5,0);
    tracep->declBus(c+132,"dout", false,-1, 5,0);
    tracep->declBit(c+32,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_csr_data_id_ex ");
    tracep->declBus(c+532,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+538,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+498,"clk", false,-1);
    tracep->declBit(c+499,"rst", false,-1);
    tracep->declQuad(c+34,"din", false,-1, 63,0);
    tracep->declQuad(c+130,"dout", false,-1, 63,0);
    tracep->declBit(c+32,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_csr_idx_id_ex ");
    tracep->declBus(c+540,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+541,"RESET_VAL", false,-1, 11,0);
    tracep->declBit(c+498,"clk", false,-1);
    tracep->declBit(c+499,"rst", false,-1);
    tracep->declBus(c+36,"din", false,-1, 11,0);
    tracep->declBus(c+120,"dout", false,-1, 11,0);
    tracep->declBit(c+32,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_csr_imm_id_ex ");
    tracep->declBus(c+532,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+538,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+498,"clk", false,-1);
    tracep->declBit(c+499,"rst", false,-1);
    tracep->declQuad(c+37,"din", false,-1, 63,0);
    tracep->declQuad(c+123,"dout", false,-1, 63,0);
    tracep->declBit(c+32,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_csr_imm_valid_id_ex ");
    tracep->declBus(c+542,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+543,"RESET_VAL", false,-1, 0,0);
    tracep->declBit(c+498,"clk", false,-1);
    tracep->declBit(c+499,"rst", false,-1);
    tracep->declBus(c+39,"din", false,-1, 0,0);
    tracep->declBus(c+125,"dout", false,-1, 0,0);
    tracep->declBit(c+32,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_csr_op_id_ex ");
    tracep->declBus(c+557,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+558,"RESET_VAL", false,-1, 2,0);
    tracep->declBit(c+498,"clk", false,-1);
    tracep->declBit(c+499,"rst", false,-1);
    tracep->declBus(c+40,"din", false,-1, 2,0);
    tracep->declBus(c+134,"dout", false,-1, 2,0);
    tracep->declBit(c+32,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_exc_op_id_ex ");
    tracep->declBus(c+528,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+545,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+498,"clk", false,-1);
    tracep->declBit(c+499,"rst", false,-1);
    tracep->declBus(c+41,"din", false,-1, 4,0);
    tracep->declBus(c+135,"dout", false,-1, 4,0);
    tracep->declBit(c+32,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_imm_data_id_ex ");
    tracep->declBus(c+532,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+538,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+498,"clk", false,-1);
    tracep->declBit(c+499,"rst", false,-1);
    tracep->declQuad(c+42,"din", false,-1, 63,0);
    tracep->declQuad(c+121,"dout", false,-1, 63,0);
    tracep->declBit(c+32,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_inst_data_id_ex ");
    tracep->declBus(c+530,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+544,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+498,"clk", false,-1);
    tracep->declBit(c+499,"rst", false,-1);
    tracep->declBus(c+44,"din", false,-1, 31,0);
    tracep->declBus(c+116,"dout", false,-1, 31,0);
    tracep->declBit(c+32,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_mem_op_id_ex ");
    tracep->declBus(c+529,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+502,"RESET_VAL", false,-1, 3,0);
    tracep->declBit(c+498,"clk", false,-1);
    tracep->declBit(c+499,"rst", false,-1);
    tracep->declBus(c+45,"din", false,-1, 3,0);
    tracep->declBus(c+133,"dout", false,-1, 3,0);
    tracep->declBit(c+32,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_pc_id_ex ");
    tracep->declBus(c+532,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+538,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+498,"clk", false,-1);
    tracep->declBit(c+499,"rst", false,-1);
    tracep->declQuad(c+46,"din", false,-1, 63,0);
    tracep->declQuad(c+114,"dout", false,-1, 63,0);
    tracep->declBit(c+32,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_pc_op_id_ex ");
    tracep->declBus(c+529,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+502,"RESET_VAL", false,-1, 3,0);
    tracep->declBit(c+498,"clk", false,-1);
    tracep->declBit(c+499,"rst", false,-1);
    tracep->declBus(c+502,"din", false,-1, 3,0);
    tracep->declBus(c+136,"dout", false,-1, 3,0);
    tracep->declBit(c+32,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rd_idx_id_ex ");
    tracep->declBus(c+528,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+545,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+498,"clk", false,-1);
    tracep->declBit(c+499,"rst", false,-1);
    tracep->declBus(c+48,"din", false,-1, 4,0);
    tracep->declBus(c+119,"dout", false,-1, 4,0);
    tracep->declBit(c+32,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rs1_data_id_ex ");
    tracep->declBus(c+532,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+538,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+498,"clk", false,-1);
    tracep->declBit(c+499,"rst", false,-1);
    tracep->declQuad(c+49,"din", false,-1, 63,0);
    tracep->declQuad(c+126,"dout", false,-1, 63,0);
    tracep->declBit(c+32,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rs1_idx_id_ex ");
    tracep->declBus(c+528,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+545,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+498,"clk", false,-1);
    tracep->declBit(c+499,"rst", false,-1);
    tracep->declBus(c+51,"din", false,-1, 4,0);
    tracep->declBus(c+117,"dout", false,-1, 4,0);
    tracep->declBit(c+32,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rs2_data_id_ex ");
    tracep->declBus(c+532,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+538,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+498,"clk", false,-1);
    tracep->declBit(c+499,"rst", false,-1);
    tracep->declQuad(c+52,"din", false,-1, 63,0);
    tracep->declQuad(c+128,"dout", false,-1, 63,0);
    tracep->declBit(c+32,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rs2_idx_id_ex ");
    tracep->declBus(c+528,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+545,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+498,"clk", false,-1);
    tracep->declBit(c+499,"rst", false,-1);
    tracep->declBus(c+54,"din", false,-1, 4,0);
    tracep->declBus(c+118,"dout", false,-1, 4,0);
    tracep->declBit(c+32,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_trap_bus_id_ex ");
    tracep->declBus(c+544,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+546,"RESET_VAL", false,-1, 18,0);
    tracep->declBit(c+498,"clk", false,-1);
    tracep->declBit(c+499,"rst", false,-1);
    tracep->declBus(c+55,"din", false,-1, 18,0);
    tracep->declBus(c+137,"dout", false,-1, 18,0);
    tracep->declBit(c+32,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ysyx_22051145_if_id ");
    tracep->declBit(c+498,"clk", false,-1);
    tracep->declBit(c+499,"rst", false,-1);
    tracep->declBus(c+4,"stall_valid_i", false,-1, 5,0);
    tracep->declBus(c+5,"flush_valid_i", false,-1, 5,0);
    tracep->declQuad(c+85,"inst_addr_if_id_i", false,-1, 63,0);
    tracep->declBus(c+87,"inst_data_if_id_i", false,-1, 31,0);
    tracep->declBus(c+1,"trap_bus_if_id_i", false,-1, 18,0);
    tracep->declQuad(c+89,"inst_addr_if_id_o", false,-1, 63,0);
    tracep->declBus(c+91,"inst_data_if_id_o", false,-1, 31,0);
    tracep->declBus(c+92,"trap_bus_if_id_o", false,-1, 18,0);
    tracep->declBit(c+56,"reg_wen", false,-1);
    tracep->pushNamePrefix("u_inst_addr_if_id ");
    tracep->declBus(c+532,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+538,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+498,"clk", false,-1);
    tracep->declBit(c+499,"rst", false,-1);
    tracep->declQuad(c+57,"din", false,-1, 63,0);
    tracep->declQuad(c+89,"dout", false,-1, 63,0);
    tracep->declBit(c+56,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_inst_data_if_id ");
    tracep->declBus(c+530,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+544,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+498,"clk", false,-1);
    tracep->declBit(c+499,"rst", false,-1);
    tracep->declBus(c+59,"din", false,-1, 31,0);
    tracep->declBus(c+91,"dout", false,-1, 31,0);
    tracep->declBit(c+56,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_trap_bus_if_id ");
    tracep->declBus(c+544,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+546,"RESET_VAL", false,-1, 18,0);
    tracep->declBit(c+498,"clk", false,-1);
    tracep->declBit(c+499,"rst", false,-1);
    tracep->declBus(c+60,"din", false,-1, 18,0);
    tracep->declBus(c+92,"dout", false,-1, 18,0);
    tracep->declBit(c+56,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ysyx_22051145_mem_wb ");
    tracep->declBit(c+498,"clk", false,-1);
    tracep->declBit(c+499,"rst", false,-1);
    tracep->declBus(c+5,"flush_valid_i", false,-1, 5,0);
    tracep->declBus(c+4,"stall_valid_i", false,-1, 5,0);
    tracep->declQuad(c+503,"csr_mstatus_writedata_mem_wb_i", false,-1, 63,0);
    tracep->declQuad(c+147,"csr_mepc_writedata_mem_wb_i", false,-1, 63,0);
    tracep->declQuad(c+505,"csr_mcause_writedata_mem_wb_i", false,-1, 63,0);
    tracep->declQuad(c+175,"csr_mtval_writedata_mem_wb_i", false,-1, 63,0);
    tracep->declQuad(c+507,"csr_mtvec_writedata_mem_wb_i", false,-1, 63,0);
    tracep->declBit(c+509,"csr_mstatus_write_valid_mem_wb_i", false,-1);
    tracep->declBit(c+177,"csr_mepc_write_valid_mem_wb_i", false,-1);
    tracep->declBit(c+177,"csr_mcause_write_valid_mem_wb_i", false,-1);
    tracep->declBit(c+177,"csr_mtval_write_valid_mem_wb_i", false,-1);
    tracep->declBit(c+510,"csr_mtvec_write_valid_mem_wb_i", false,-1);
    tracep->declQuad(c+147,"pc_mem_wb_i", false,-1, 63,0);
    tracep->declBus(c+149,"inst_data_mem_wb_i", false,-1, 31,0);
    tracep->declBus(c+162,"csr_addr_mem_wb_i", false,-1, 11,0);
    tracep->declQuad(c+159,"exc_csr_data_mem_wb_i", false,-1, 63,0);
    tracep->declBit(c+161,"exc_csr_valid_mem_wb_i", false,-1);
    tracep->declBus(c+152,"rd_addr_mem_wb_i", false,-1, 4,0);
    tracep->declQuad(c+172,"mem_data_mem_wb_i", false,-1, 63,0);
    tracep->declQuad(c+181,"csr_mstatus_writedata_mem_wb_o", false,-1, 63,0);
    tracep->declQuad(c+183,"csr_mepc_writedata_mem_wb_o", false,-1, 63,0);
    tracep->declQuad(c+185,"csr_mcause_writedata_mem_wb_o", false,-1, 63,0);
    tracep->declQuad(c+187,"csr_mtval_writedata_mem_wb_o", false,-1, 63,0);
    tracep->declQuad(c+189,"csr_mtvec_writedata_mem_wb_o", false,-1, 63,0);
    tracep->declBit(c+191,"csr_mstatus_write_valid_mem_wb_o", false,-1);
    tracep->declBit(c+192,"csr_mepc_write_valid_mem_wb_o", false,-1);
    tracep->declBit(c+193,"csr_mcause_write_valid_mem_wb_o", false,-1);
    tracep->declBit(c+194,"csr_mtval_write_valid_mem_wb_o", false,-1);
    tracep->declBit(c+195,"csr_mtvec_write_valid_mem_wb_o", false,-1);
    tracep->declQuad(c+196,"pc_mem_wb_o", false,-1, 63,0);
    tracep->declBus(c+198,"inst_data_mem_wb_o", false,-1, 31,0);
    tracep->declBus(c+199,"csr_addr_mem_wb_o", false,-1, 11,0);
    tracep->declQuad(c+200,"exc_csr_data_mem_wb_o", false,-1, 63,0);
    tracep->declBit(c+202,"exc_csr_valid_mem_wb_o", false,-1);
    tracep->declBus(c+203,"rd_addr_mem_wb_o", false,-1, 4,0);
    tracep->declQuad(c+204,"mem_data_mem_wb_o", false,-1, 63,0);
    tracep->declBit(c+61,"reg_wen", false,-1);
    tracep->pushNamePrefix("u_csr_addr_mem_wb ");
    tracep->declBus(c+540,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+541,"RESET_VAL", false,-1, 11,0);
    tracep->declBit(c+498,"clk", false,-1);
    tracep->declBit(c+499,"rst", false,-1);
    tracep->declBus(c+62,"din", false,-1, 11,0);
    tracep->declBus(c+199,"dout", false,-1, 11,0);
    tracep->declBit(c+61,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_csr_mcause_write_valid_mem_wb ");
    tracep->declBus(c+542,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+543,"RESET_VAL", false,-1, 0,0);
    tracep->declBit(c+498,"clk", false,-1);
    tracep->declBit(c+499,"rst", false,-1);
    tracep->declBus(c+63,"din", false,-1, 0,0);
    tracep->declBus(c+193,"dout", false,-1, 0,0);
    tracep->declBit(c+61,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_csr_mcause_writedata_mem_wb ");
    tracep->declBus(c+532,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+538,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+498,"clk", false,-1);
    tracep->declBit(c+499,"rst", false,-1);
    tracep->declQuad(c+64,"din", false,-1, 63,0);
    tracep->declQuad(c+185,"dout", false,-1, 63,0);
    tracep->declBit(c+61,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_csr_mepc_write_valid_mem_wb ");
    tracep->declBus(c+542,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+543,"RESET_VAL", false,-1, 0,0);
    tracep->declBit(c+498,"clk", false,-1);
    tracep->declBit(c+499,"rst", false,-1);
    tracep->declBus(c+63,"din", false,-1, 0,0);
    tracep->declBus(c+192,"dout", false,-1, 0,0);
    tracep->declBit(c+61,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_csr_mepc_writedata_mem_wb ");
    tracep->declBus(c+532,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+538,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+498,"clk", false,-1);
    tracep->declBit(c+499,"rst", false,-1);
    tracep->declQuad(c+66,"din", false,-1, 63,0);
    tracep->declQuad(c+183,"dout", false,-1, 63,0);
    tracep->declBit(c+61,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_csr_mstatus_write_valid_mem_wb ");
    tracep->declBus(c+542,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+543,"RESET_VAL", false,-1, 0,0);
    tracep->declBit(c+498,"clk", false,-1);
    tracep->declBit(c+499,"rst", false,-1);
    tracep->declBus(c+68,"din", false,-1, 0,0);
    tracep->declBus(c+191,"dout", false,-1, 0,0);
    tracep->declBit(c+61,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_csr_mstatus_writedata_mem_wb ");
    tracep->declBus(c+532,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+538,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+498,"clk", false,-1);
    tracep->declBit(c+499,"rst", false,-1);
    tracep->declQuad(c+69,"din", false,-1, 63,0);
    tracep->declQuad(c+181,"dout", false,-1, 63,0);
    tracep->declBit(c+61,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_csr_mtval_write_valid_mem_wb ");
    tracep->declBus(c+542,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+543,"RESET_VAL", false,-1, 0,0);
    tracep->declBit(c+498,"clk", false,-1);
    tracep->declBit(c+499,"rst", false,-1);
    tracep->declBus(c+63,"din", false,-1, 0,0);
    tracep->declBus(c+194,"dout", false,-1, 0,0);
    tracep->declBit(c+61,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_csr_mtval_writedata_mem_wb ");
    tracep->declBus(c+532,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+538,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+498,"clk", false,-1);
    tracep->declBit(c+499,"rst", false,-1);
    tracep->declQuad(c+71,"din", false,-1, 63,0);
    tracep->declQuad(c+187,"dout", false,-1, 63,0);
    tracep->declBit(c+61,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_csr_mtvec_write_valid_mem_wb ");
    tracep->declBus(c+542,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+543,"RESET_VAL", false,-1, 0,0);
    tracep->declBit(c+498,"clk", false,-1);
    tracep->declBit(c+499,"rst", false,-1);
    tracep->declBus(c+73,"din", false,-1, 0,0);
    tracep->declBus(c+195,"dout", false,-1, 0,0);
    tracep->declBit(c+61,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_csr_mtvec_writedata_mem_wb ");
    tracep->declBus(c+532,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+538,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+498,"clk", false,-1);
    tracep->declBit(c+499,"rst", false,-1);
    tracep->declQuad(c+74,"din", false,-1, 63,0);
    tracep->declQuad(c+189,"dout", false,-1, 63,0);
    tracep->declBit(c+61,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_exc_csr_data_mem_wb ");
    tracep->declBus(c+532,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+538,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+498,"clk", false,-1);
    tracep->declBit(c+499,"rst", false,-1);
    tracep->declQuad(c+76,"din", false,-1, 63,0);
    tracep->declQuad(c+200,"dout", false,-1, 63,0);
    tracep->declBit(c+61,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_exc_csr_valid_mem_wb ");
    tracep->declBus(c+542,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+543,"RESET_VAL", false,-1, 0,0);
    tracep->declBit(c+498,"clk", false,-1);
    tracep->declBit(c+499,"rst", false,-1);
    tracep->declBus(c+78,"din", false,-1, 0,0);
    tracep->declBus(c+202,"dout", false,-1, 0,0);
    tracep->declBit(c+61,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_inst_data_mem_wb ");
    tracep->declBus(c+530,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+544,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+498,"clk", false,-1);
    tracep->declBit(c+499,"rst", false,-1);
    tracep->declBus(c+79,"din", false,-1, 31,0);
    tracep->declBus(c+198,"dout", false,-1, 31,0);
    tracep->declBit(c+61,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_mem_data_mem_wb ");
    tracep->declBus(c+532,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+538,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+498,"clk", false,-1);
    tracep->declBit(c+499,"rst", false,-1);
    tracep->declQuad(c+80,"din", false,-1, 63,0);
    tracep->declQuad(c+204,"dout", false,-1, 63,0);
    tracep->declBit(c+61,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_pc_mem_wb ");
    tracep->declBus(c+532,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+538,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+498,"clk", false,-1);
    tracep->declBit(c+499,"rst", false,-1);
    tracep->declQuad(c+66,"din", false,-1, 63,0);
    tracep->declQuad(c+196,"dout", false,-1, 63,0);
    tracep->declBit(c+61,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rd_addr_mem_wb ");
    tracep->declBus(c+528,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+545,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+498,"clk", false,-1);
    tracep->declBit(c+499,"rst", false,-1);
    tracep->declBus(c+82,"din", false,-1, 4,0);
    tracep->declBus(c+203,"dout", false,-1, 4,0);
    tracep->declBit(c+61,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ysyx_22051145_memory ");
    tracep->declBit(c+498,"clk", false,-1);
    tracep->declBit(c+499,"rst", false,-1);
    tracep->declQuad(c+147,"pc_i", false,-1, 63,0);
    tracep->declBus(c+149,"inst_data_i", false,-1, 31,0);
    tracep->declBus(c+152,"rd_idx_i", false,-1, 4,0);
    tracep->declQuad(c+155,"rs2_data_i", false,-1, 63,0);
    tracep->declBus(c+164,"mem_op_i", false,-1, 3,0);
    tracep->declQuad(c+157,"exc_alu_data_i", false,-1, 63,0);
    tracep->declBus(c+162,"csr_addr_i", false,-1, 11,0);
    tracep->declQuad(c+159,"exc_csr_data_i", false,-1, 63,0);
    tracep->declBit(c+161,"exc_csr_valid_i", false,-1);
    tracep->declBus(c+166,"mem_addr_o", false,-1, 31,0);
    tracep->declBit(c+167,"mem_addr_valid_o", false,-1);
    tracep->declBus(c+168,"mem_mask_o", false,-1, 7,0);
    tracep->declBit(c+169,"mem_write_valid_o", false,-1);
    tracep->declBit(c+228,"mem_data_ready_i", false,-1);
    tracep->declQuad(c+226,"mem_rdata_i", false,-1, 63,0);
    tracep->declQuad(c+170,"mem_wdata_o", false,-1, 63,0);
    tracep->declBit(c+167,"ram_stall_valid_mem_o", false,-1);
    tracep->declBus(c+165,"trap_bus_i", false,-1, 18,0);
    tracep->declQuad(c+147,"pc_o", false,-1, 63,0);
    tracep->declBus(c+149,"inst_data_o", false,-1, 31,0);
    tracep->declQuad(c+172,"mem_data_o", false,-1, 63,0);
    tracep->declBus(c+152,"rd_idx_o", false,-1, 4,0);
    tracep->declBus(c+162,"csr_addr_o", false,-1, 11,0);
    tracep->declQuad(c+159,"exc_csr_data_o", false,-1, 63,0);
    tracep->declBit(c+161,"exc_csr_valid_o", false,-1);
    tracep->declBus(c+174,"trap_bus_o", false,-1, 18,0);
    tracep->declBus(c+537,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_22051145_pc_reg ");
    tracep->declBit(c+498,"clk", false,-1);
    tracep->declBit(c+499,"rst", false,-1);
    tracep->declBus(c+4,"stall_valid_i", false,-1, 5,0);
    tracep->declBus(c+5,"flush_valid_i", false,-1, 5,0);
    tracep->declQuad(c+143,"branch_pc_i", false,-1, 63,0);
    tracep->declBit(c+145,"branch_pc_valid_i", false,-1);
    tracep->declQuad(c+178,"clint_pc_i", false,-1, 63,0);
    tracep->declBit(c+180,"clint_pc_valid_i", false,-1);
    tracep->declBit(c+500,"read_req_o", false,-1);
    tracep->declQuad(c+2,"pc_next_o", false,-1, 63,0);
    tracep->declQuad(c+85,"pc_o", false,-1, 63,0);
    tracep->pushNamePrefix("u_pc_reg ");
    tracep->declBus(c+532,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+559,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+498,"clk", false,-1);
    tracep->declBit(c+499,"rst", false,-1);
    tracep->declQuad(c+83,"din", false,-1, 63,0);
    tracep->declQuad(c+85,"dout", false,-1, 63,0);
    tracep->declBit(c+501,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ysyx_22051145_ram ");
    tracep->declBit(c+498,"clk", false,-1);
    tracep->declBit(c+499,"rst", false,-1);
    tracep->declBus(c+223,"if_read_addr_i", false,-1, 31,0);
    tracep->declBit(c+224,"if_valid_i", false,-1);
    tracep->declBus(c+225,"if_rmask_i", false,-1, 7,0);
    tracep->declQuad(c+242,"if_rdata_o", false,-1, 63,0);
    tracep->declBit(c+241,"if_rdata_valid_o", false,-1);
    tracep->declBus(c+229,"mem_read_addr_i", false,-1, 31,0);
    tracep->declBit(c+230,"mem_valid_i", false,-1);
    tracep->declBus(c+231,"mem_rmask_i", false,-1, 7,0);
    tracep->declQuad(c+237,"mem_rdata_o", false,-1, 63,0);
    tracep->declBit(c+239,"mem_rdata_valid_o", false,-1);
    tracep->declBus(c+232,"mem_write_addr_i", false,-1, 31,0);
    tracep->declBit(c+233,"mem_write_valid_i", false,-1);
    tracep->declBus(c+234,"mem_wmask_i", false,-1, 7,0);
    tracep->declQuad(c+235,"mem_wdata_i", false,-1, 63,0);
    tracep->declBit(c+240,"mem_wdata_ready_o", false,-1);
    tracep->declBus(c+557,"STATE_LEN", false,-1, 31,0);
    tracep->declBus(c+558,"IDLE", false,-1, 2,0);
    tracep->declBus(c+561,"MEM1", false,-1, 2,0);
    tracep->declBus(c+562,"MEM2", false,-1, 2,0);
    tracep->declBus(c+563,"MEM3", false,-1, 2,0);
    tracep->declBus(c+564,"PREIDLE", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_22051145_rv64_csr_regfile ");
    tracep->declBit(c+498,"clk", false,-1);
    tracep->declBit(c+499,"rst", false,-1);
    tracep->declQuad(c+181,"csr_mstatus_writedata_i", false,-1, 63,0);
    tracep->declQuad(c+183,"csr_mepc_writedata_i", false,-1, 63,0);
    tracep->declQuad(c+185,"csr_mcause_writedata_i", false,-1, 63,0);
    tracep->declQuad(c+187,"csr_mtval_writedata_i", false,-1, 63,0);
    tracep->declQuad(c+189,"csr_mtvec_writedata_i", false,-1, 63,0);
    tracep->declBit(c+191,"csr_mstatus_write_valid_i", false,-1);
    tracep->declBit(c+192,"csr_mepc_write_valid_i", false,-1);
    tracep->declBit(c+193,"csr_mcause_write_valid_i", false,-1);
    tracep->declBit(c+194,"csr_mtval_write_valid_i", false,-1);
    tracep->declBit(c+195,"csr_mtvec_write_valid_i", false,-1);
    tracep->declQuad(c+210,"csr_mstatus_readdata_o", false,-1, 63,0);
    tracep->declQuad(c+212,"csr_mepc_readdata_o", false,-1, 63,0);
    tracep->declQuad(c+214,"csr_mcause_readdata_o", false,-1, 63,0);
    tracep->declQuad(c+216,"csr_mtval_readdata_o", false,-1, 63,0);
    tracep->declQuad(c+218,"csr_mtvec_readdata_o", false,-1, 63,0);
    tracep->declBus(c+96,"csr_readaddr_i", false,-1, 11,0);
    tracep->declQuad(c+101,"csr_readdata_o", false,-1, 63,0);
    tracep->declBus(c+199,"csr_writeaddr_i", false,-1, 11,0);
    tracep->declBit(c+202,"csr_write_valid_i", false,-1);
    tracep->declQuad(c+200,"csr_writedata_i", false,-1, 63,0);
    tracep->pushNamePrefix("u_csr_mcause ");
    tracep->declBus(c+532,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+538,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+498,"clk", false,-1);
    tracep->declBit(c+499,"rst", false,-1);
    tracep->declQuad(c+483,"din", false,-1, 63,0);
    tracep->declQuad(c+214,"dout", false,-1, 63,0);
    tracep->declBit(c+485,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_csr_mepc ");
    tracep->declBus(c+532,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+538,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+498,"clk", false,-1);
    tracep->declBit(c+499,"rst", false,-1);
    tracep->declQuad(c+486,"din", false,-1, 63,0);
    tracep->declQuad(c+212,"dout", false,-1, 63,0);
    tracep->declBit(c+488,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_csr_mstatus ");
    tracep->declBus(c+532,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+565,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+498,"clk", false,-1);
    tracep->declBit(c+499,"rst", false,-1);
    tracep->declQuad(c+489,"din", false,-1, 63,0);
    tracep->declQuad(c+210,"dout", false,-1, 63,0);
    tracep->declBit(c+491,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_csr_mtval ");
    tracep->declBus(c+532,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+538,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+498,"clk", false,-1);
    tracep->declBit(c+499,"rst", false,-1);
    tracep->declQuad(c+492,"din", false,-1, 63,0);
    tracep->declQuad(c+216,"dout", false,-1, 63,0);
    tracep->declBit(c+494,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_csr_mtvec ");
    tracep->declBus(c+532,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+538,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+498,"clk", false,-1);
    tracep->declBit(c+499,"rst", false,-1);
    tracep->declQuad(c+495,"din", false,-1, 63,0);
    tracep->declQuad(c+218,"dout", false,-1, 63,0);
    tracep->declBit(c+497,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ysyx_22051145_wb ");
    tracep->declBit(c+498,"clk", false,-1);
    tracep->declBit(c+499,"rst", false,-1);
    tracep->declQuad(c+196,"pc_wb_i", false,-1, 63,0);
    tracep->declBus(c+198,"inst_data_wb_i", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vysyx_22051145_top___024root__trace_init_top(Vysyx_22051145_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051145_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051145_top___024root__trace_init_top\n"); );
    // Body
    Vysyx_22051145_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vysyx_22051145_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_22051145_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_22051145_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vysyx_22051145_top___024root__trace_register(Vysyx_22051145_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051145_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051145_top___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vysyx_22051145_top___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vysyx_22051145_top___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vysyx_22051145_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vysyx_22051145_top___024root__trace_full_sub_0(Vysyx_22051145_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vysyx_22051145_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051145_top___024root__trace_full_top_0\n"); );
    // Init
    Vysyx_22051145_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_22051145_top___024root*>(voidSelf);
    Vysyx_22051145_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vysyx_22051145_top___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vysyx_22051145_top___024root__trace_full_sub_0(Vysyx_22051145_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051145_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051145_top___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<4>/*127:0*/ __Vtemp_h32591264__0;
    VlWide<4>/*127:0*/ __Vtemp_hd0985551__0;
    VlWide<4>/*127:0*/ __Vtemp_hd56be58a__0;
    // Body
    bufp->fullIData(oldp+1,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_fetch__DOT___if_trap_bus),19);
    bufp->fullQData(oldp+2,(vlSelf->ysyx_22051145_top__DOT__pc_next),64);
    bufp->fullCData(oldp+4,(vlSelf->ysyx_22051145_top__DOT__stall_clint),6);
    bufp->fullCData(oldp+5,(vlSelf->ysyx_22051145_top__DOT__flush_clint),6);
    bufp->fullBit(oldp+6,((1U & (~ ((IData)(vlSelf->ysyx_22051145_top__DOT__stall_clint) 
                                    >> 3U)))));
    bufp->fullQData(oldp+7,(((8U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                              ? 0ULL : vlSelf->ysyx_22051145_top__DOT__exc_alu_data_ex)),64);
    bufp->fullSData(oldp+9,(((8U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                              ? 0U : (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_idx_id_ex_q))),12);
    bufp->fullQData(oldp+10,(((8U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                               ? 0ULL : (((- (QData)((IData)(
                                                             (2U 
                                                              == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_op_id_ex_q))))) 
                                          & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_execute_csr__DOT___csr_op2) 
                                         | (((- (QData)((IData)(
                                                                (3U 
                                                                 == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_op_id_ex_q))))) 
                                             & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_data_id_ex_q 
                                                | vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_execute_csr__DOT___csr_op2)) 
                                            | (((- (QData)((IData)(
                                                                   (4U 
                                                                    == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_op_id_ex_q))))) 
                                                & ((~ vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_execute_csr__DOT___csr_op2) 
                                                   & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_data_id_ex_q)) 
                                               | ((- (QData)((IData)(
                                                                     (1U 
                                                                      == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_op_id_ex_q))))) 
                                                  & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_data_id_ex_q)))))),64);
    bufp->fullBit(oldp+12,((1U & ((~ ((IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint) 
                                      >> 3U)) & (~ 
                                                 ((0U 
                                                   == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_op_id_ex_q)) 
                                                  | (1U 
                                                     == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_op_id_ex_q))))))));
    bufp->fullQData(oldp+13,(((8U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                               ? 0ULL : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___imm_data_id_ex_q)),64);
    bufp->fullIData(oldp+15,(((8U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                               ? 0x13U : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___inst_data_id_ex_q)),32);
    bufp->fullCData(oldp+16,(((8U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                               ? 0U : (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___mem_op_id_ex_q))),4);
    bufp->fullQData(oldp+17,(((8U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                               ? 0ULL : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___pc_id_ex_q)),64);
    bufp->fullCData(oldp+19,(((8U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                               ? 0U : (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___pc_op_id_ex_q))),4);
    bufp->fullCData(oldp+20,(((8U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                               ? 0U : (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___rd_idx_id_ex_q))),5);
    bufp->fullQData(oldp+21,(((8U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                               ? 0ULL : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___rs1_data_id_ex_q)),64);
    bufp->fullQData(oldp+23,(((8U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                               ? 0ULL : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___rs2_data_id_ex_q)),64);
    bufp->fullIData(oldp+25,(((8U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                               ? 0U : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___exc_trap_bus)),19);
    bufp->fullIData(oldp+26,((IData)(vlSelf->ysyx_22051145_top__DOT__pc_next)),32);
    bufp->fullCData(oldp+27,((0xfU & (IData)(vlSelf->ysyx_22051145_top__DOT__pc_next))),4);
    bufp->fullCData(oldp+28,((0x1fU & (IData)((vlSelf->ysyx_22051145_top__DOT__pc_next 
                                               >> 4U)))),5);
    bufp->fullIData(oldp+29,((0x7fffffU & (IData)((vlSelf->ysyx_22051145_top__DOT__pc_next 
                                                   >> 9U)))),23);
    bufp->fullBit(oldp+30,(((0x7fffffU & (IData)((vlSelf->ysyx_22051145_top__DOT__pc_next 
                                                  >> 9U))) 
                            == vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs
                            [(0x1fU & (IData)((vlSelf->ysyx_22051145_top__DOT__pc_next 
                                               >> 4U)))])));
    bufp->fullCData(oldp+31,((0x1fU & (IData)((vlSelf->ysyx_22051145_top__DOT__pc_next 
                                               >> 4U)))),6);
    bufp->fullBit(oldp+32,((1U & (~ ((IData)(vlSelf->ysyx_22051145_top__DOT__stall_clint) 
                                     >> 2U)))));
    bufp->fullCData(oldp+33,(((4U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                               ? 0U : (IData)(vlSelf->ysyx_22051145_top__DOT__alu_op_id))),6);
    bufp->fullQData(oldp+34,(((4U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                               ? 0ULL : ((0x300U == (IData)(vlSelf->ysyx_22051145_top__DOT__csr_idx_id))
                                          ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mstatus_q
                                          : ((0x341U 
                                              == (IData)(vlSelf->ysyx_22051145_top__DOT__csr_idx_id))
                                              ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mepc_q
                                              : ((0x342U 
                                                  == (IData)(vlSelf->ysyx_22051145_top__DOT__csr_idx_id))
                                                  ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mcause_q
                                                  : 
                                                 ((0x343U 
                                                   == (IData)(vlSelf->ysyx_22051145_top__DOT__csr_idx_id))
                                                   ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mtval_q
                                                   : 
                                                  ((0x305U 
                                                    == (IData)(vlSelf->ysyx_22051145_top__DOT__csr_idx_id))
                                                    ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mtvec_q
                                                    : 0ULL))))))),64);
    bufp->fullSData(oldp+36,(((4U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                               ? 0U : (IData)(vlSelf->ysyx_22051145_top__DOT__csr_idx_id))),12);
    bufp->fullQData(oldp+37,(((4U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                               ? 0ULL : (QData)((IData)(
                                                        (0x1fU 
                                                         & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                            >> 0xfU)))))),64);
    bufp->fullBit(oldp+39,(((~ ((IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint) 
                                >> 2U)) & (IData)(vlSelf->ysyx_22051145_top__DOT__csr_imm_valid_id))));
    bufp->fullCData(oldp+40,(((4U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                               ? 0U : ((IData)(((0U 
                                                 == 
                                                 (0xf8000U 
                                                  & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)) 
                                                & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___csr_set) 
                                                   | (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___csr_clear))))
                                        ? 1U : ((2U 
                                                 & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___csr_write)))) 
                                                | ((3U 
                                                    & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___csr_set)))) 
                                                   | (4U 
                                                      & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___csr_clear))))))))),3);
    bufp->fullCData(oldp+41,(((4U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                               ? 0U : ((1U & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_auipc)))) 
                                       | ((2U & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_lui)))) 
                                          | ((3U & 
                                              (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_jal)))) 
                                             | ((4U 
                                                 & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_jalr)))) 
                                                | ((5U 
                                                    & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_load)))) 
                                                   | ((6U 
                                                       & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_store)))) 
                                                      | ((7U 
                                                          & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_branch)))) 
                                                         | ((8U 
                                                             & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_op_imm)))) 
                                                            | ((9U 
                                                                & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_op_imm_32)))) 
                                                               | ((0xaU 
                                                                   & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_op)))) 
                                                                  | ((0xbU 
                                                                      & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_op_32)))) 
                                                                     | ((0xcU 
                                                                         & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___isNeed_csr)))) 
                                                                        | (0xdU 
                                                                           & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___inst_ebreak)))))))))))))))))),5);
    bufp->fullQData(oldp+42,(((4U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                               ? 0ULL : (((- (QData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___I_type))) 
                                          & (((- (QData)((IData)(
                                                                 (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                  >> 0x1fU)))) 
                                              << 0xbU) 
                                             | (QData)((IData)(
                                                               (0x7ffU 
                                                                & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                   >> 0x14U)))))) 
                                         | (((- (QData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_store))) 
                                             & (((- (QData)((IData)(
                                                                    (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                     >> 0x1fU)))) 
                                                 << 0xbU) 
                                                | (QData)((IData)(
                                                                  ((0x7e0U 
                                                                    & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                       >> 0x14U)) 
                                                                   | (0x1fU 
                                                                      & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                         >> 7U))))))) 
                                            | (((- (QData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_branch))) 
                                                & (((- (QData)((IData)(
                                                                       (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                        >> 0x1fU)))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     ((0x800U 
                                                                       & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                          << 4U)) 
                                                                      | ((0x7e0U 
                                                                          & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                             >> 0x14U)) 
                                                                         | (0x1eU 
                                                                            & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                               >> 7U)))))))) 
                                               | (((- (QData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___U_type))) 
                                                   & (((- (QData)((IData)(
                                                                          (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                           >> 0x1fU)))) 
                                                       << 0x1fU) 
                                                      | (QData)((IData)(
                                                                        (0x7ffff000U 
                                                                         & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q))))) 
                                                  | ((- (QData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_jal))) 
                                                     & (((- (QData)((IData)(
                                                                            (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                             >> 0x1fU)))) 
                                                         << 0x14U) 
                                                        | (QData)((IData)(
                                                                          ((0xff000U 
                                                                            & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q) 
                                                                           | ((0x800U 
                                                                               & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                                >> 9U)) 
                                                                              | (0x7feU 
                                                                                & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                                >> 0x14U)))))))))))))),64);
    bufp->fullIData(oldp+44,(((4U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                               ? 0x13U : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)),32);
    bufp->fullCData(oldp+45,(((4U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                               ? 0U : ((1U & (- (IData)(
                                                        ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_load) 
                                                         & (0U 
                                                            == 
                                                            (0x7000U 
                                                             & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)))))) 
                                       | ((4U & (- (IData)(
                                                           ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_load) 
                                                            & (0x4000U 
                                                               == 
                                                               (0x7000U 
                                                                & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)))))) 
                                          | ((2U & 
                                              (- (IData)(
                                                         ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_load) 
                                                          & (0x1000U 
                                                             == 
                                                             (0x7000U 
                                                              & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)))))) 
                                             | ((3U 
                                                 & (- (IData)(
                                                              ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_load) 
                                                               & (0x2000U 
                                                                  == 
                                                                  (0x7000U 
                                                                   & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)))))) 
                                                | ((5U 
                                                    & (- (IData)(
                                                                 ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_load) 
                                                                  & (0x5000U 
                                                                     == 
                                                                     (0x7000U 
                                                                      & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)))))) 
                                                   | ((8U 
                                                       & (- (IData)(
                                                                    ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_store) 
                                                                     & (0U 
                                                                        == 
                                                                        (0x7000U 
                                                                         & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)))))) 
                                                      | ((9U 
                                                          & (- (IData)(
                                                                       ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_store) 
                                                                        & (0x1000U 
                                                                           == 
                                                                           (0x7000U 
                                                                            & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)))))) 
                                                         | ((0xaU 
                                                             & (- (IData)(
                                                                          ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_store) 
                                                                           & (0x2000U 
                                                                              == 
                                                                              (0x7000U 
                                                                               & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)))))) 
                                                            | ((7U 
                                                                & (- (IData)(
                                                                             ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_load) 
                                                                              & (0x6000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)))))) 
                                                               | ((6U 
                                                                   & (- (IData)(
                                                                                ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_load) 
                                                                                & (0x3000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)))))) 
                                                                  | (0xbU 
                                                                     & (- (IData)(
                                                                                ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_store) 
                                                                                & (0x3000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)))))))))))))))))),4);
    bufp->fullQData(oldp+46,(((4U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                               ? 0ULL : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_addr_if_id_q)),64);
    bufp->fullCData(oldp+48,(((4U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                               ? 0U : (((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_hec3090c5__0) 
                                        | (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_ha2d02da5__0))
                                        ? (0x1fU & 
                                           (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                            >> 7U))
                                        : 0U))),5);
    bufp->fullQData(oldp+49,(((4U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                               ? 0ULL : ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___rs1_exc_bypass_valid)
                                          ? vlSelf->ysyx_22051145_top__DOT__exc_alu_data_ex
                                          : ((((IData)(vlSelf->ysyx_22051145_top__DOT__rs1_idx_id) 
                                               == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___rd_idx_ex_mem_q)) 
                                              & (0U 
                                                 != (IData)(vlSelf->ysyx_22051145_top__DOT__rs1_idx_id)))
                                              ? vlSelf->ysyx_22051145_top__DOT__mem_data_mem
                                              : (((IData)(vlSelf->ysyx_22051145_top__DOT__rs1_idx_id) 
                                                  == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___rd_addr_mem_wb_q))
                                                  ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT___write_data
                                                  : 
                                                 vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf
                                                 [vlSelf->ysyx_22051145_top__DOT__rs1_idx_id]))))),64);
    bufp->fullCData(oldp+51,(((4U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                               ? 0U : (IData)(vlSelf->ysyx_22051145_top__DOT__rs1_idx_id))),5);
    bufp->fullQData(oldp+52,(((4U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                               ? 0ULL : ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___rs2_exc_bypass_valid)
                                          ? vlSelf->ysyx_22051145_top__DOT__exc_alu_data_ex
                                          : ((((IData)(vlSelf->ysyx_22051145_top__DOT__rs2_idx_id) 
                                               == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___rd_idx_ex_mem_q)) 
                                              & (0U 
                                                 != (IData)(vlSelf->ysyx_22051145_top__DOT__rs2_idx_id)))
                                              ? vlSelf->ysyx_22051145_top__DOT__mem_data_mem
                                              : (((IData)(vlSelf->ysyx_22051145_top__DOT__rs2_idx_id) 
                                                  == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___rd_addr_mem_wb_q))
                                                  ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT___write_data
                                                  : 
                                                 vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf
                                                 [vlSelf->ysyx_22051145_top__DOT__rs2_idx_id]))))),64);
    bufp->fullCData(oldp+54,(((4U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                               ? 0U : (IData)(vlSelf->ysyx_22051145_top__DOT__rs2_idx_id))),5);
    bufp->fullIData(oldp+55,(((4U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                               ? 0U : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___decode_trap_bus)),19);
    bufp->fullBit(oldp+56,((1U & (~ ((IData)(vlSelf->ysyx_22051145_top__DOT__stall_clint) 
                                     >> 1U)))));
    bufp->fullQData(oldp+57,(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___flush_valid)
                               ? 0ULL : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_pc_reg__DOT___pc_current)),64);
    bufp->fullIData(oldp+59,(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___flush_valid)
                               ? 0x13U : ((IData)(vlSelf->ysyx_22051145_top__DOT__if_rdata_valid_icache)
                                           ? ((((0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__blk_addr_reg) 
                                                     << 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__icache_line_rdata[
                                                 (((IData)(0x1fU) 
                                                   + 
                                                   (0x7fU 
                                                    & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__blk_addr_reg) 
                                                       << 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__blk_addr_reg) 
                                                      << 3U))))) 
                                               | (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__icache_line_rdata[
                                                  (3U 
                                                   & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__blk_addr_reg) 
                                                      >> 2U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__blk_addr_reg) 
                                                      << 3U)))) 
                                              & (IData)(
                                                        (- (QData)((IData)(vlSelf->ysyx_22051145_top__DOT__if_rdata_valid_icache)))))
                                           : 0x13U))),32);
    bufp->fullIData(oldp+60,(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___flush_valid)
                               ? 0U : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_fetch__DOT___if_trap_bus)),19);
    bufp->fullBit(oldp+61,((1U & (~ ((IData)(vlSelf->ysyx_22051145_top__DOT__stall_clint) 
                                     >> 4U)))));
    bufp->fullSData(oldp+62,(((0x10U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                               ? 0U : (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___csr_addr_ex_mem_q))),12);
    bufp->fullBit(oldp+63,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mtval_write_valid_mem_wb_d));
    bufp->fullQData(oldp+64,(((0x10U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                               ? 0ULL : 0xbULL)),64);
    bufp->fullQData(oldp+66,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mepc_writedata_mem_wb_d),64);
    bufp->fullBit(oldp+68,(((~ ((IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint) 
                                >> 4U)) & (IData)(vlSelf->ysyx_22051145_top__DOT__csr_mstatus_write_valid_clint))));
    bufp->fullQData(oldp+69,(((0x10U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                               ? 0ULL : vlSelf->ysyx_22051145_top__DOT__csr_mstatus_writedata_clint)),64);
    bufp->fullQData(oldp+71,(((0x10U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                               ? 0ULL : (QData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___inst_data_ex_mem_q)))),64);
    bufp->fullBit(oldp+73,(((~ ((IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint) 
                                >> 4U)) & (IData)(vlSelf->ysyx_22051145_top__DOT__csr_mtvec_write_valid_clint))));
    bufp->fullQData(oldp+74,(((0x10U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                               ? 0ULL : vlSelf->ysyx_22051145_top__DOT__csr_mtvec_writedata_clint)),64);
    bufp->fullQData(oldp+76,(((0x10U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                               ? 0ULL : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___csr_writedata_ex_mem_q)),64);
    bufp->fullBit(oldp+78,(((~ ((IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint) 
                                >> 4U)) & (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___csr_writevalid_ex_mem_q))));
    bufp->fullIData(oldp+79,(((0x10U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                               ? 0x13U : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___inst_data_ex_mem_q)),32);
    bufp->fullQData(oldp+80,(((0x10U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                               ? 0ULL : vlSelf->ysyx_22051145_top__DOT__mem_data_mem)),64);
    bufp->fullCData(oldp+82,(((0x10U & (IData)(vlSelf->ysyx_22051145_top__DOT__flush_clint))
                               ? 0U : (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___rd_idx_ex_mem_q))),5);
    bufp->fullQData(oldp+83,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_pc_reg__DOT___pc_next_d),64);
    bufp->fullQData(oldp+85,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_pc_reg__DOT___pc_current),64);
    bufp->fullIData(oldp+87,(((IData)(vlSelf->ysyx_22051145_top__DOT__if_rdata_valid_icache)
                               ? ((((0U == (0x1fU & 
                                            ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__blk_addr_reg) 
                                             << 3U)))
                                     ? 0U : (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__icache_line_rdata[
                                             (((IData)(0x1fU) 
                                               + (0x7fU 
                                                  & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__blk_addr_reg) 
                                                     << 3U))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__blk_addr_reg) 
                                                     << 3U))))) 
                                   | (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__icache_line_rdata[
                                      (3U & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__blk_addr_reg) 
                                             >> 2U))] 
                                      >> (0x1fU & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__blk_addr_reg) 
                                                   << 3U)))) 
                                  & (IData)((- (QData)((IData)(vlSelf->ysyx_22051145_top__DOT__if_rdata_valid_icache)))))
                               : 0x13U)),32);
    bufp->fullBit(oldp+88,((1U & (~ (IData)(vlSelf->ysyx_22051145_top__DOT__if_rdata_valid_icache)))));
    bufp->fullQData(oldp+89,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_addr_if_id_q),64);
    bufp->fullIData(oldp+91,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q),32);
    bufp->fullIData(oldp+92,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___trap_bus_if_id_q),19);
    bufp->fullCData(oldp+93,(vlSelf->ysyx_22051145_top__DOT__rs1_idx_id),5);
    bufp->fullCData(oldp+94,(vlSelf->ysyx_22051145_top__DOT__rs2_idx_id),5);
    bufp->fullCData(oldp+95,((((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_hec3090c5__0) 
                               | (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT____VdfgTmp_ha2d02da5__0))
                               ? (0x1fU & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                           >> 7U)) : 0U)),5);
    bufp->fullSData(oldp+96,(vlSelf->ysyx_22051145_top__DOT__csr_idx_id),12);
    bufp->fullQData(oldp+97,(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___rs1_exc_bypass_valid)
                               ? vlSelf->ysyx_22051145_top__DOT__exc_alu_data_ex
                               : ((((IData)(vlSelf->ysyx_22051145_top__DOT__rs1_idx_id) 
                                    == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___rd_idx_ex_mem_q)) 
                                   & (0U != (IData)(vlSelf->ysyx_22051145_top__DOT__rs1_idx_id)))
                                   ? vlSelf->ysyx_22051145_top__DOT__mem_data_mem
                                   : (((IData)(vlSelf->ysyx_22051145_top__DOT__rs1_idx_id) 
                                       == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___rd_addr_mem_wb_q))
                                       ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT___write_data
                                       : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf
                                      [vlSelf->ysyx_22051145_top__DOT__rs1_idx_id])))),64);
    bufp->fullQData(oldp+99,(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___rs2_exc_bypass_valid)
                               ? vlSelf->ysyx_22051145_top__DOT__exc_alu_data_ex
                               : ((((IData)(vlSelf->ysyx_22051145_top__DOT__rs2_idx_id) 
                                    == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___rd_idx_ex_mem_q)) 
                                   & (0U != (IData)(vlSelf->ysyx_22051145_top__DOT__rs2_idx_id)))
                                   ? vlSelf->ysyx_22051145_top__DOT__mem_data_mem
                                   : (((IData)(vlSelf->ysyx_22051145_top__DOT__rs2_idx_id) 
                                       == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___rd_addr_mem_wb_q))
                                       ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT___write_data
                                       : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf
                                      [vlSelf->ysyx_22051145_top__DOT__rs2_idx_id])))),64);
    bufp->fullQData(oldp+101,(((0x300U == (IData)(vlSelf->ysyx_22051145_top__DOT__csr_idx_id))
                                ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mstatus_q
                                : ((0x341U == (IData)(vlSelf->ysyx_22051145_top__DOT__csr_idx_id))
                                    ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mepc_q
                                    : ((0x342U == (IData)(vlSelf->ysyx_22051145_top__DOT__csr_idx_id))
                                        ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mcause_q
                                        : ((0x343U 
                                            == (IData)(vlSelf->ysyx_22051145_top__DOT__csr_idx_id))
                                            ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mtval_q
                                            : ((0x305U 
                                                == (IData)(vlSelf->ysyx_22051145_top__DOT__csr_idx_id))
                                                ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mtvec_q
                                                : 0ULL)))))),64);
    bufp->fullQData(oldp+103,((QData)((IData)((0x1fU 
                                               & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                  >> 0xfU))))),64);
    bufp->fullBit(oldp+105,(vlSelf->ysyx_22051145_top__DOT__csr_imm_valid_id));
    bufp->fullQData(oldp+106,((((- (QData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___I_type))) 
                                & (((- (QData)((IData)(
                                                       (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                        >> 0x1fU)))) 
                                    << 0xbU) | (QData)((IData)(
                                                               (0x7ffU 
                                                                & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                   >> 0x14U)))))) 
                               | (((- (QData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_store))) 
                                   & (((- (QData)((IData)(
                                                          (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                           >> 0x1fU)))) 
                                       << 0xbU) | (QData)((IData)(
                                                                  ((0x7e0U 
                                                                    & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                       >> 0x14U)) 
                                                                   | (0x1fU 
                                                                      & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                         >> 7U))))))) 
                                  | (((- (QData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_branch))) 
                                      & (((- (QData)((IData)(
                                                             (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                              >> 0x1fU)))) 
                                          << 0xcU) 
                                         | (QData)((IData)(
                                                           ((0x800U 
                                                             & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                << 4U)) 
                                                            | ((0x7e0U 
                                                                & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                   >> 0x14U)) 
                                                               | (0x1eU 
                                                                  & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                     >> 7U)))))))) 
                                     | (((- (QData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___U_type))) 
                                         & (((- (QData)((IData)(
                                                                (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                 >> 0x1fU)))) 
                                             << 0x1fU) 
                                            | (QData)((IData)(
                                                              (0x7ffff000U 
                                                               & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q))))) 
                                        | ((- (QData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_jal))) 
                                           & (((- (QData)((IData)(
                                                                  (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                   >> 0x1fU)))) 
                                               << 0x14U) 
                                              | (QData)((IData)(
                                                                ((0xff000U 
                                                                  & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q) 
                                                                 | ((0x800U 
                                                                     & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                        >> 9U)) 
                                                                    | (0x7feU 
                                                                       & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q 
                                                                          >> 0x14U))))))))))))),64);
    bufp->fullCData(oldp+108,(vlSelf->ysyx_22051145_top__DOT__alu_op_id),6);
    bufp->fullCData(oldp+109,(((1U & (- (IData)(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_load) 
                                                 & (0U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)))))) 
                               | ((4U & (- (IData)(
                                                   ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_load) 
                                                    & (0x4000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)))))) 
                                  | ((2U & (- (IData)(
                                                      ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_load) 
                                                       & (0x1000U 
                                                          == 
                                                          (0x7000U 
                                                           & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)))))) 
                                     | ((3U & (- (IData)(
                                                         ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_load) 
                                                          & (0x2000U 
                                                             == 
                                                             (0x7000U 
                                                              & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)))))) 
                                        | ((5U & (- (IData)(
                                                            ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_load) 
                                                             & (0x5000U 
                                                                == 
                                                                (0x7000U 
                                                                 & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)))))) 
                                           | ((8U & 
                                               (- (IData)(
                                                          ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_store) 
                                                           & (0U 
                                                              == 
                                                              (0x7000U 
                                                               & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)))))) 
                                              | ((9U 
                                                  & (- (IData)(
                                                               ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_store) 
                                                                & (0x1000U 
                                                                   == 
                                                                   (0x7000U 
                                                                    & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)))))) 
                                                 | ((0xaU 
                                                     & (- (IData)(
                                                                  ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_store) 
                                                                   & (0x2000U 
                                                                      == 
                                                                      (0x7000U 
                                                                       & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)))))) 
                                                    | ((7U 
                                                        & (- (IData)(
                                                                     ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_load) 
                                                                      & (0x6000U 
                                                                         == 
                                                                         (0x7000U 
                                                                          & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)))))) 
                                                       | ((6U 
                                                           & (- (IData)(
                                                                        ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_load) 
                                                                         & (0x3000U 
                                                                            == 
                                                                            (0x7000U 
                                                                             & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)))))) 
                                                          | (0xbU 
                                                             & (- (IData)(
                                                                          ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_store) 
                                                                           & (0x3000U 
                                                                              == 
                                                                              (0x7000U 
                                                                               & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q))))))))))))))))),4);
    bufp->fullCData(oldp+110,(((IData)(((0U == (0xf8000U 
                                                & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_if_id__DOT___inst_data_if_id_q)) 
                                        & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___csr_set) 
                                           | (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___csr_clear))))
                                ? 1U : ((2U & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___csr_write)))) 
                                        | ((3U & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___csr_set)))) 
                                           | (4U & 
                                              (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___csr_clear)))))))),3);
    bufp->fullCData(oldp+111,(((1U & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_auipc)))) 
                               | ((2U & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_lui)))) 
                                  | ((3U & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_jal)))) 
                                     | ((4U & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_jalr)))) 
                                        | ((5U & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_load)))) 
                                           | ((6U & 
                                               (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_store)))) 
                                              | ((7U 
                                                  & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_branch)))) 
                                                 | ((8U 
                                                     & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_op_imm)))) 
                                                    | ((9U 
                                                        & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_op_imm_32)))) 
                                                       | ((0xaU 
                                                           & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_op)))) 
                                                          | ((0xbU 
                                                              & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___type_op_32)))) 
                                                             | ((0xcU 
                                                                 & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___isNeed_csr)))) 
                                                                | (0xdU 
                                                                   & (- (IData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___inst_ebreak))))))))))))))))),5);
    bufp->fullBit(oldp+112,(((5U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___exc_op_id_ex_q)) 
                             & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___rs1_exc_bypass_valid) 
                                | (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___rs2_exc_bypass_valid)))));
    bufp->fullIData(oldp+113,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_decode__DOT___decode_trap_bus),19);
    bufp->fullQData(oldp+114,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___pc_id_ex_q),64);
    bufp->fullIData(oldp+116,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___inst_data_id_ex_q),32);
    bufp->fullCData(oldp+117,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___rs1_idx_id_ex_q),5);
    bufp->fullCData(oldp+118,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___rs2_idx_id_ex_q),5);
    bufp->fullCData(oldp+119,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___rd_idx_id_ex_q),5);
    bufp->fullSData(oldp+120,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_idx_id_ex_q),12);
    bufp->fullQData(oldp+121,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___imm_data_id_ex_q),64);
    bufp->fullQData(oldp+123,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_imm_id_ex_q),64);
    bufp->fullBit(oldp+125,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_imm_valid_id_ex_q));
    bufp->fullQData(oldp+126,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___rs1_data_id_ex_q),64);
    bufp->fullQData(oldp+128,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___rs2_data_id_ex_q),64);
    bufp->fullQData(oldp+130,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_data_id_ex_q),64);
    bufp->fullCData(oldp+132,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q),6);
    bufp->fullCData(oldp+133,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___mem_op_id_ex_q),4);
    bufp->fullCData(oldp+134,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_op_id_ex_q),3);
    bufp->fullCData(oldp+135,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___exc_op_id_ex_q),5);
    bufp->fullCData(oldp+136,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___pc_op_id_ex_q),4);
    bufp->fullIData(oldp+137,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___trap_bus_id_ex_q),19);
    bufp->fullQData(oldp+138,(vlSelf->ysyx_22051145_top__DOT__exc_alu_data_ex),64);
    bufp->fullQData(oldp+140,((((- (QData)((IData)(
                                                   (2U 
                                                    == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_op_id_ex_q))))) 
                                & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_execute_csr__DOT___csr_op2) 
                               | (((- (QData)((IData)(
                                                      (3U 
                                                       == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_op_id_ex_q))))) 
                                   & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_data_id_ex_q 
                                      | vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_execute_csr__DOT___csr_op2)) 
                                  | (((- (QData)((IData)(
                                                         (4U 
                                                          == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_op_id_ex_q))))) 
                                      & ((~ vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_execute_csr__DOT___csr_op2) 
                                         & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_data_id_ex_q)) 
                                     | ((- (QData)((IData)(
                                                           (1U 
                                                            == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_op_id_ex_q))))) 
                                        & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_data_id_ex_q))))),64);
    bufp->fullBit(oldp+142,((1U & (~ ((0U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_op_id_ex_q)) 
                                      | (1U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___csr_op_id_ex_q)))))));
    bufp->fullQData(oldp+143,((((- (QData)((IData)(
                                                   ((3U 
                                                     == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___exc_op_id_ex_q)) 
                                                    | (7U 
                                                       == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___exc_op_id_ex_q)))))) 
                                & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___imm_data_id_ex_q 
                                   + vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___pc_id_ex_q)) 
                               | ((- (QData)((IData)(
                                                     (4U 
                                                      == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___exc_op_id_ex_q))))) 
                                  & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___imm_data_id_ex_q 
                                     + vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___rs1_data_id_ex_q)))),64);
    bufp->fullBit(oldp+145,(vlSelf->ysyx_22051145_top__DOT__branch_pc_valid_ex));
    bufp->fullIData(oldp+146,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___exc_trap_bus),19);
    bufp->fullQData(oldp+147,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___pc_ex_mem_q),64);
    bufp->fullIData(oldp+149,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___inst_data_ex_mem_q),32);
    bufp->fullQData(oldp+150,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___imm_data_ex_mem_q),64);
    bufp->fullCData(oldp+152,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___rd_idx_ex_mem_q),5);
    bufp->fullQData(oldp+153,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___rs1_data_ex_mem_q),64);
    bufp->fullQData(oldp+155,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___rs2_data_ex_mem_q),64);
    bufp->fullQData(oldp+157,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___alu_data_ex_mem_q),64);
    bufp->fullQData(oldp+159,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___csr_writedata_ex_mem_q),64);
    bufp->fullBit(oldp+161,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___csr_writevalid_ex_mem_q));
    bufp->fullSData(oldp+162,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___csr_addr_ex_mem_q),12);
    bufp->fullCData(oldp+163,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___pc_op_ex_mem_q),4);
    bufp->fullCData(oldp+164,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___mem_op_ex_mem_q),4);
    bufp->fullIData(oldp+165,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___trap_bus_ex_mem_q),19);
    bufp->fullIData(oldp+166,(vlSelf->ysyx_22051145_top__DOT__mem_addr_mem),32);
    bufp->fullBit(oldp+167,(vlSelf->ysyx_22051145_top__DOT__mem_addr_valid_mem));
    bufp->fullCData(oldp+168,(vlSelf->ysyx_22051145_top__DOT__mem_mask_mem),8);
    bufp->fullBit(oldp+169,(vlSelf->ysyx_22051145_top__DOT__mem_write_valid_mem));
    bufp->fullQData(oldp+170,(vlSelf->ysyx_22051145_top__DOT__mem_wdata_mem),64);
    bufp->fullQData(oldp+172,(vlSelf->ysyx_22051145_top__DOT__mem_data_mem),64);
    bufp->fullIData(oldp+174,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mem_trap_bus),19);
    bufp->fullQData(oldp+175,((QData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___inst_data_ex_mem_q))),64);
    bufp->fullBit(oldp+177,((1U & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mem_trap_bus 
                                   >> 0x12U))));
    bufp->fullQData(oldp+178,((((- (QData)((IData)(
                                                   (1U 
                                                    & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mem_trap_bus 
                                                       >> 0x10U))))) 
                                & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mepc_q) 
                               | ((- (QData)((IData)(
                                                     (1U 
                                                      & (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_memory__DOT___mem_trap_bus 
                                                         >> 0x12U))))) 
                                  & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mtvec_q))),64);
    bufp->fullBit(oldp+180,(vlSelf->ysyx_22051145_top__DOT__pc_valid_clint));
    bufp->fullQData(oldp+181,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mstatus_writedata_mem_wb_q),64);
    bufp->fullQData(oldp+183,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mepc_writedata_mem_wb_q),64);
    bufp->fullQData(oldp+185,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mcause_writedata_mem_wb_q),64);
    bufp->fullQData(oldp+187,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mtval_writedata_mem_wb_q),64);
    bufp->fullQData(oldp+189,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mtvec_writedata_mem_wb_q),64);
    bufp->fullBit(oldp+191,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mstatus_write_valid_mem_wb_q));
    bufp->fullBit(oldp+192,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mepc_write_valid_mem_wb_q));
    bufp->fullBit(oldp+193,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mcause_write_valid_mem_wb_q));
    bufp->fullBit(oldp+194,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mtval_write_valid_mem_wb_q));
    bufp->fullBit(oldp+195,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mtvec_write_valid_mem_wb_q));
    bufp->fullQData(oldp+196,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___pc_mem_wb_q),64);
    bufp->fullIData(oldp+198,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___inst_data_mem_wb_q),32);
    bufp->fullSData(oldp+199,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_addr_mem_wb_q),12);
    bufp->fullQData(oldp+200,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___exc_csr_data_mem_wb_q),64);
    bufp->fullBit(oldp+202,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___exc_csr_valid_mem_wb_q));
    bufp->fullCData(oldp+203,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___rd_addr_mem_wb_q),5);
    bufp->fullQData(oldp+204,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___mem_data_mem_wb_q),64);
    bufp->fullQData(oldp+206,((((IData)(vlSelf->ysyx_22051145_top__DOT__rs1_idx_id) 
                                == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___rd_addr_mem_wb_q))
                                ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT___write_data
                                : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf
                               [vlSelf->ysyx_22051145_top__DOT__rs1_idx_id])),64);
    bufp->fullQData(oldp+208,((((IData)(vlSelf->ysyx_22051145_top__DOT__rs2_idx_id) 
                                == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___rd_addr_mem_wb_q))
                                ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT___write_data
                                : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf
                               [vlSelf->ysyx_22051145_top__DOT__rs2_idx_id])),64);
    bufp->fullQData(oldp+210,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mstatus_q),64);
    bufp->fullQData(oldp+212,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mepc_q),64);
    bufp->fullQData(oldp+214,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mcause_q),64);
    bufp->fullQData(oldp+216,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mtval_q),64);
    bufp->fullQData(oldp+218,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mtvec_q),64);
    bufp->fullQData(oldp+220,(((QData)((IData)((((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__blk_addr_reg) 
                                                      << 3U)))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__icache_line_rdata[
                                                  (((IData)(0x1fU) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__blk_addr_reg) 
                                                        << 3U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__blk_addr_reg) 
                                                       << 3U))))) 
                                                | (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__icache_line_rdata[
                                                   (3U 
                                                    & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__blk_addr_reg) 
                                                       >> 2U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__blk_addr_reg) 
                                                       << 3U)))))) 
                               & (- (QData)((IData)(vlSelf->ysyx_22051145_top__DOT__if_rdata_valid_icache))))),64);
    bufp->fullBit(oldp+222,(vlSelf->ysyx_22051145_top__DOT__if_rdata_valid_icache));
    bufp->fullIData(oldp+223,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT___ram_raddr_icache_o),32);
    bufp->fullBit(oldp+224,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT___ram_raddr_valid_icache_o));
    bufp->fullCData(oldp+225,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT___ram_rmask_icache_o),8);
    bufp->fullQData(oldp+226,(vlSelf->ysyx_22051145_top__DOT__mem_rdata_dcache),64);
    bufp->fullBit(oldp+228,(vlSelf->ysyx_22051145_top__DOT__mem_data_ready_dcache));
    bufp->fullIData(oldp+229,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT___ram_raddr_dcache_o),32);
    bufp->fullBit(oldp+230,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT___ram_raddr_valid_dcache_o));
    bufp->fullCData(oldp+231,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT___ram_rmask_dcache_o),8);
    bufp->fullIData(oldp+232,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT___ram_waddr_dcache_o),32);
    bufp->fullBit(oldp+233,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT___ram_waddr_valid_dcache_o));
    bufp->fullCData(oldp+234,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT___ram_wmask_dcache_o),8);
    bufp->fullQData(oldp+235,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT___ram_wdata_dcache_o),64);
    bufp->fullQData(oldp+237,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___mem_rdata_o),64);
    bufp->fullBit(oldp+239,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___mem_rdata_valid_o));
    bufp->fullBit(oldp+240,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___ram_write_ready));
    bufp->fullBit(oldp+241,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___if_rdata_valid_o));
    bufp->fullQData(oldp+242,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ram__DOT___if_rdata_o),64);
    bufp->fullBit(oldp+244,((0xa0000000U == (0xa0000000U 
                                             & vlSelf->ysyx_22051145_top__DOT__mem_addr_mem))));
    bufp->fullCData(oldp+245,(((0U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___mem_op_ex_mem_q))
                                ? 0U : (0xfU & (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_ex_mem__DOT___alu_data_ex_mem_q)))),4);
    bufp->fullCData(oldp+246,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__cache_line_idx),5);
    bufp->fullIData(oldp+247,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__cache_line_tag),23);
    bufp->fullBit(oldp+248,((vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__cache_line_tag 
                             == vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs
                             [vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__cache_line_idx])));
    bufp->fullCData(oldp+249,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcahce_state),4);
    bufp->fullCData(oldp+250,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__blk_addr_reg),4);
    bufp->fullCData(oldp+251,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__line_idx_reg),5);
    bufp->fullIData(oldp+252,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__line_tag_reg),23);
    bufp->fullBit(oldp+253,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_tag_wen));
    bufp->fullBit(oldp+254,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcahce_rdata_ok));
    bufp->fullWData(oldp+255,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__cache_line_temp),128);
    bufp->fullQData(oldp+259,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__uncache_rdata),64);
    bufp->fullBit(oldp+261,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_data_wen));
    bufp->fullWData(oldp+262,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_wmask_temp),128);
    bufp->fullWData(oldp+266,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_wmask),128);
    bufp->fullQData(oldp+270,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__wmask_bit),64);
    bufp->fullCData(oldp+272,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__addr_last3),3);
    bufp->fullWData(oldp+273,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_line_rdata),128);
    bufp->fullBit(oldp+277,((1U & (~ (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_data_wen)))));
    __Vtemp_h32591264__0[0U] = (~ vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_wmask[0U]);
    __Vtemp_h32591264__0[1U] = (~ vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_wmask[1U]);
    __Vtemp_h32591264__0[2U] = (~ vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_wmask[2U]);
    __Vtemp_h32591264__0[3U] = (~ vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__dcache_wmask[3U]);
    bufp->fullWData(oldp+278,(__Vtemp_h32591264__0),128);
    bufp->fullCData(oldp+282,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__cache_line_idx),6);
    bufp->fullIData(oldp+283,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[0]),23);
    bufp->fullIData(oldp+284,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[1]),23);
    bufp->fullIData(oldp+285,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[2]),23);
    bufp->fullIData(oldp+286,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[3]),23);
    bufp->fullIData(oldp+287,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[4]),23);
    bufp->fullIData(oldp+288,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[5]),23);
    bufp->fullIData(oldp+289,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[6]),23);
    bufp->fullIData(oldp+290,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[7]),23);
    bufp->fullIData(oldp+291,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[8]),23);
    bufp->fullIData(oldp+292,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[9]),23);
    bufp->fullIData(oldp+293,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[10]),23);
    bufp->fullIData(oldp+294,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[11]),23);
    bufp->fullIData(oldp+295,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[12]),23);
    bufp->fullIData(oldp+296,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[13]),23);
    bufp->fullIData(oldp+297,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[14]),23);
    bufp->fullIData(oldp+298,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[15]),23);
    bufp->fullIData(oldp+299,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[16]),23);
    bufp->fullIData(oldp+300,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[17]),23);
    bufp->fullIData(oldp+301,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[18]),23);
    bufp->fullIData(oldp+302,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[19]),23);
    bufp->fullIData(oldp+303,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[20]),23);
    bufp->fullIData(oldp+304,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[21]),23);
    bufp->fullIData(oldp+305,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[22]),23);
    bufp->fullIData(oldp+306,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[23]),23);
    bufp->fullIData(oldp+307,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[24]),23);
    bufp->fullIData(oldp+308,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[25]),23);
    bufp->fullIData(oldp+309,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[26]),23);
    bufp->fullIData(oldp+310,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[27]),23);
    bufp->fullIData(oldp+311,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[28]),23);
    bufp->fullIData(oldp+312,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[29]),23);
    bufp->fullIData(oldp+313,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[30]),23);
    bufp->fullIData(oldp+314,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__dcache_tag_regs[31]),23);
    bufp->fullIData(oldp+315,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_dcache__DOT__u_dcache_tag__DOT__i),32);
    bufp->fullQData(oldp+316,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed),64);
    bufp->fullQData(oldp+318,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr2_64_signed),64);
    bufp->fullQData(oldp+320,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT___alu_out),64);
    bufp->fullBit(oldp+322,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___compare_out));
    bufp->fullBit(oldp+323,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___is_div_signed));
    bufp->fullBit(oldp+324,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___is_div32));
    bufp->fullQData(oldp+325,(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___is_div32)
                                ? (QData)((IData)(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___is_div_signed)
                                                    ? 
                                                   VL_DIVS_III(32, (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed), (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr2_64_signed))
                                                    : 
                                                   VL_DIV_III(32, (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed), (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr2_64_signed)))))
                                : ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___is_div_signed)
                                    ? VL_DIVS_QQQ(64, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr2_64_signed)
                                    : VL_DIV_QQQ(64, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr2_64_signed)))),64);
    bufp->fullQData(oldp+327,(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___is_div32)
                                ? (QData)((IData)(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___is_div_signed)
                                                    ? 
                                                   VL_MODDIVS_III(32, (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed), (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr2_64_signed))
                                                    : 
                                                   VL_MODDIV_III(32, (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed), (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr2_64_signed)))))
                                : ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___is_div_signed)
                                    ? VL_MODDIVS_QQQ(64, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr2_64_signed)
                                    : VL_MODDIV_QQQ(64, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr2_64_signed)))),64);
    bufp->fullQData(oldp+329,(VL_DIVS_QQQ(64, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr2_64_signed)),64);
    bufp->fullQData(oldp+331,(VL_MODDIVS_QQQ(64, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr2_64_signed)),64);
    bufp->fullQData(oldp+333,(VL_DIV_QQQ(64, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr2_64_signed)),64);
    bufp->fullQData(oldp+335,(VL_MODDIV_QQQ(64, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr2_64_signed)),64);
    bufp->fullQData(oldp+337,(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___is_div_signed)
                                ? VL_DIVS_QQQ(64, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr2_64_signed)
                                : VL_DIV_QQQ(64, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr2_64_signed))),64);
    bufp->fullQData(oldp+339,(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___is_div_signed)
                                ? VL_MODDIVS_QQQ(64, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr2_64_signed)
                                : VL_MODDIV_QQQ(64, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed, vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr2_64_signed))),64);
    bufp->fullIData(oldp+341,((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed)),32);
    bufp->fullIData(oldp+342,((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr2_64_signed)),32);
    bufp->fullIData(oldp+343,(VL_DIVS_III(32, (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed), (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr2_64_signed))),32);
    bufp->fullIData(oldp+344,(VL_MODDIVS_III(32, (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed), (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr2_64_signed))),32);
    bufp->fullIData(oldp+345,(VL_DIV_III(32, (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed), (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr2_64_signed))),32);
    bufp->fullIData(oldp+346,(VL_MODDIV_III(32, (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed), (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr2_64_signed))),32);
    bufp->fullIData(oldp+347,(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___is_div_signed)
                                ? VL_DIVS_III(32, (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed), (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr2_64_signed))
                                : VL_DIV_III(32, (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed), (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr2_64_signed)))),32);
    bufp->fullIData(oldp+348,(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___is_div_signed)
                                ? VL_MODDIVS_III(32, (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed), (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr2_64_signed))
                                : VL_MODDIV_III(32, (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr1_64_signed), (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr2_64_signed)))),32);
    bufp->fullBit(oldp+349,(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT____VdfgTmp_hf3c97b71__0) 
                             | ((0x16U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q)) 
                                | (0x18U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q))))));
    bufp->fullBit(oldp+350,(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT____VdfgTmp_hf3c97b71__0) 
                             | (0x18U == (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_id_ex__DOT___alu_op_id_ex_q)))));
    bufp->fullWData(oldp+351,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_mul_top__DOT___mul_result),128);
    bufp->fullBit(oldp+355,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___shift_sra));
    bufp->fullBit(oldp+356,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___shift_srl));
    bufp->fullBit(oldp+357,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___shift_sll));
    bufp->fullBit(oldp+358,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___isshift32));
    bufp->fullCData(oldp+359,((0x3fU & (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_div_top__DOT__sr2_64_signed))),6);
    bufp->fullQData(oldp+360,((((- (QData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___shift_srl))) 
                                & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
                               | (((- (QData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___shift_sra))) 
                                   & ((vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
                                       & (0xffffffffffffffffULL 
                                          >> (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___eff_mask_shift_count))) 
                                      | ((~ (0xffffffffffffffffULL 
                                             >> (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___eff_mask_shift_count))) 
                                         & (- (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___isshift32)
                                                                   ? (IData)(
                                                                             (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                                              >> 0x1fU))
                                                                   : (IData)(
                                                                             (vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num 
                                                                              >> 0x3fU)))))))))) 
                                  | ((- (QData)((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT___shift_sll))) 
                                     & vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res)))),64);
    bufp->fullQData(oldp+362,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num),64);
    bufp->fullQData(oldp+364,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv),64);
    bufp->fullQData(oldp+366,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res),64);
    bufp->fullQData(oldp+368,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_execute__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res),64);
    bufp->fullQData(oldp+370,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[0]),64);
    bufp->fullQData(oldp+372,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[1]),64);
    bufp->fullQData(oldp+374,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[2]),64);
    bufp->fullQData(oldp+376,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[3]),64);
    bufp->fullQData(oldp+378,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[4]),64);
    bufp->fullQData(oldp+380,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[5]),64);
    bufp->fullQData(oldp+382,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[6]),64);
    bufp->fullQData(oldp+384,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[7]),64);
    bufp->fullQData(oldp+386,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[8]),64);
    bufp->fullQData(oldp+388,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[9]),64);
    bufp->fullQData(oldp+390,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[10]),64);
    bufp->fullQData(oldp+392,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[11]),64);
    bufp->fullQData(oldp+394,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[12]),64);
    bufp->fullQData(oldp+396,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[13]),64);
    bufp->fullQData(oldp+398,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[14]),64);
    bufp->fullQData(oldp+400,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[15]),64);
    bufp->fullQData(oldp+402,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[16]),64);
    bufp->fullQData(oldp+404,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[17]),64);
    bufp->fullQData(oldp+406,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[18]),64);
    bufp->fullQData(oldp+408,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[19]),64);
    bufp->fullQData(oldp+410,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[20]),64);
    bufp->fullQData(oldp+412,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[21]),64);
    bufp->fullQData(oldp+414,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[22]),64);
    bufp->fullQData(oldp+416,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[23]),64);
    bufp->fullQData(oldp+418,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[24]),64);
    bufp->fullQData(oldp+420,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[25]),64);
    bufp->fullQData(oldp+422,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[26]),64);
    bufp->fullQData(oldp+424,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[27]),64);
    bufp->fullQData(oldp+426,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[28]),64);
    bufp->fullQData(oldp+428,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[29]),64);
    bufp->fullQData(oldp+430,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[30]),64);
    bufp->fullQData(oldp+432,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_gpr__DOT__rf[31]),64);
    bufp->fullCData(oldp+434,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__icahce_state),4);
    bufp->fullCData(oldp+435,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__blk_addr_reg),4);
    bufp->fullCData(oldp+436,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__line_idx_reg),5);
    bufp->fullIData(oldp+437,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__line_tag_reg),23);
    bufp->fullBit(oldp+438,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__icache_tag_wen));
    bufp->fullBit(oldp+439,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__icahce_rdata_ok));
    bufp->fullWData(oldp+440,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__cache_line_temp),128);
    bufp->fullBit(oldp+444,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__icache_data_wen));
    bufp->fullWData(oldp+445,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__icache_line_rdata),128);
    bufp->fullBit(oldp+449,((1U & (~ (IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__icache_data_wen)))));
    bufp->fullIData(oldp+450,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[0]),23);
    bufp->fullIData(oldp+451,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[1]),23);
    bufp->fullIData(oldp+452,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[2]),23);
    bufp->fullIData(oldp+453,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[3]),23);
    bufp->fullIData(oldp+454,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[4]),23);
    bufp->fullIData(oldp+455,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[5]),23);
    bufp->fullIData(oldp+456,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[6]),23);
    bufp->fullIData(oldp+457,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[7]),23);
    bufp->fullIData(oldp+458,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[8]),23);
    bufp->fullIData(oldp+459,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[9]),23);
    bufp->fullIData(oldp+460,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[10]),23);
    bufp->fullIData(oldp+461,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[11]),23);
    bufp->fullIData(oldp+462,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[12]),23);
    bufp->fullIData(oldp+463,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[13]),23);
    bufp->fullIData(oldp+464,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[14]),23);
    bufp->fullIData(oldp+465,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[15]),23);
    bufp->fullIData(oldp+466,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[16]),23);
    bufp->fullIData(oldp+467,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[17]),23);
    bufp->fullIData(oldp+468,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[18]),23);
    bufp->fullIData(oldp+469,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[19]),23);
    bufp->fullIData(oldp+470,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[20]),23);
    bufp->fullIData(oldp+471,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[21]),23);
    bufp->fullIData(oldp+472,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[22]),23);
    bufp->fullIData(oldp+473,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[23]),23);
    bufp->fullIData(oldp+474,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[24]),23);
    bufp->fullIData(oldp+475,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[25]),23);
    bufp->fullIData(oldp+476,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[26]),23);
    bufp->fullIData(oldp+477,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[27]),23);
    bufp->fullIData(oldp+478,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[28]),23);
    bufp->fullIData(oldp+479,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[29]),23);
    bufp->fullIData(oldp+480,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[30]),23);
    bufp->fullIData(oldp+481,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[31]),23);
    bufp->fullIData(oldp+482,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_icache_top__DOT__u_icache_tag__DOT__i),32);
    bufp->fullQData(oldp+483,(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mcause_write_valid_mem_wb_q)
                                ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mcause_writedata_mem_wb_q
                                : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___exc_csr_data_mem_wb_q)),64);
    bufp->fullBit(oldp+485,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mcause_en));
    bufp->fullQData(oldp+486,(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mepc_write_valid_mem_wb_q)
                                ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mepc_writedata_mem_wb_q
                                : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___exc_csr_data_mem_wb_q)),64);
    bufp->fullBit(oldp+488,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mepc_en));
    bufp->fullQData(oldp+489,(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mstatus_write_valid_mem_wb_q)
                                ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mstatus_writedata_mem_wb_q
                                : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___exc_csr_data_mem_wb_q)),64);
    bufp->fullBit(oldp+491,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mstatus_en));
    bufp->fullQData(oldp+492,(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mtval_write_valid_mem_wb_q)
                                ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mtval_writedata_mem_wb_q
                                : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___exc_csr_data_mem_wb_q)),64);
    bufp->fullBit(oldp+494,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mtval_en));
    bufp->fullQData(oldp+495,(((IData)(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mtvec_write_valid_mem_wb_q)
                                ? vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___csr_mtvec_writedata_mem_wb_q
                                : vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_mem_wb__DOT___exc_csr_data_mem_wb_q)),64);
    bufp->fullBit(oldp+497,(vlSelf->ysyx_22051145_top__DOT__ysyx_22051145_rv64_csr_regfile__DOT___mtvec_en));
    bufp->fullBit(oldp+498,(vlSelf->clk));
    bufp->fullBit(oldp+499,(vlSelf->rst));
    bufp->fullBit(oldp+500,((1U & (~ (IData)(vlSelf->rst)))));
    bufp->fullBit(oldp+501,((1U & (~ ((IData)(vlSelf->ysyx_22051145_top__DOT__stall_clint) 
                                      | (IData)(vlSelf->rst))))));
    bufp->fullCData(oldp+502,(0U),4);
    bufp->fullQData(oldp+503,(vlSelf->ysyx_22051145_top__DOT__csr_mstatus_writedata_clint),64);
    bufp->fullQData(oldp+505,(0xbULL),64);
    bufp->fullQData(oldp+507,(vlSelf->ysyx_22051145_top__DOT__csr_mtvec_writedata_clint),64);
    bufp->fullBit(oldp+509,(vlSelf->ysyx_22051145_top__DOT__csr_mstatus_write_valid_clint));
    bufp->fullBit(oldp+510,(vlSelf->ysyx_22051145_top__DOT__csr_mtvec_write_valid_clint));
    bufp->fullCData(oldp+511,(4U),6);
    bufp->fullCData(oldp+512,(3U),6);
    bufp->fullCData(oldp+513,(6U),6);
    bufp->fullCData(oldp+514,(0U),6);
    bufp->fullCData(oldp+515,(0xeU),6);
    bufp->fullCData(oldp+516,(0x10U),6);
    bufp->fullCData(oldp+517,(0xfU),6);
    bufp->fullCData(oldp+518,(1U),4);
    bufp->fullCData(oldp+519,(2U),4);
    bufp->fullCData(oldp+520,(3U),4);
    bufp->fullCData(oldp+521,(4U),4);
    bufp->fullCData(oldp+522,(5U),4);
    bufp->fullCData(oldp+523,(6U),4);
    bufp->fullCData(oldp+524,(7U),4);
    bufp->fullCData(oldp+525,(8U),4);
    bufp->fullCData(oldp+526,(9U),4);
    bufp->fullCData(oldp+527,(0xaU),4);
    bufp->fullIData(oldp+528,(5U),32);
    bufp->fullIData(oldp+529,(4U),32);
    bufp->fullIData(oldp+530,(0x20U),32);
    bufp->fullIData(oldp+531,(0x80U),32);
    bufp->fullIData(oldp+532,(0x40U),32);
    bufp->fullIData(oldp+533,(6U),32);
    bufp->fullBit(oldp+534,(0U));
    bufp->fullBit(oldp+535,(1U));
    bufp->fullIData(oldp+536,(0x17U),32);
    bufp->fullIData(oldp+537,(0x13U),32);
    bufp->fullQData(oldp+538,(0ULL),64);
    bufp->fullIData(oldp+540,(0xcU),32);
    bufp->fullSData(oldp+541,(0U),12);
    bufp->fullIData(oldp+542,(1U),32);
    bufp->fullBit(oldp+543,(0U));
    bufp->fullIData(oldp+544,(0x13U),32);
    bufp->fullCData(oldp+545,(0U),5);
    bufp->fullIData(oldp+546,(0U),19);
    bufp->fullIData(oldp+547,(0x40U),32);
    bufp->fullCData(oldp+548,(0xfU),8);
    __Vtemp_hd0985551__0[0U] = 0xffffffffU;
    __Vtemp_hd0985551__0[1U] = 0xffffffffU;
    __Vtemp_hd0985551__0[2U] = 0xffffffffU;
    __Vtemp_hd0985551__0[3U] = 0xffffffffU;
    bufp->fullWData(oldp+549,(__Vtemp_hd0985551__0),128);
    __Vtemp_hd56be58a__0[0U] = 0U;
    __Vtemp_hd56be58a__0[1U] = 0U;
    __Vtemp_hd56be58a__0[2U] = 0U;
    __Vtemp_hd56be58a__0[3U] = 0U;
    bufp->fullWData(oldp+553,(__Vtemp_hd56be58a__0),128);
    bufp->fullIData(oldp+557,(3U),32);
    bufp->fullCData(oldp+558,(0U),3);
    bufp->fullQData(oldp+559,(0x80000000ULL),64);
    bufp->fullCData(oldp+561,(1U),3);
    bufp->fullCData(oldp+562,(2U),3);
    bufp->fullCData(oldp+563,(3U),3);
    bufp->fullCData(oldp+564,(4U),3);
    bufp->fullQData(oldp+565,(0xa00001800ULL),64);
}
