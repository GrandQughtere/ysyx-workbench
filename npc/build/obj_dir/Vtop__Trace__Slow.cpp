// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceInitTop(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+168,"clk", false,-1);
        tracep->declBit(c+169,"rstn", false,-1);
        tracep->declQuad(c+170,"pc", false,-1, 63,0);
        tracep->declQuad(c+172,"snxt_pc", false,-1, 63,0);
        tracep->declQuad(c+174,"dnxt_pc", false,-1, 63,0);
        tracep->declBus(c+176,"instr", false,-1, 31,0);
        tracep->declBit(c+177,"ifu_ARVALID", false,-1);
        tracep->declBit(c+178,"ifu_ARREADY", false,-1);
        tracep->declQuad(c+179,"ifu_ARADDR", false,-1, 63,0);
        tracep->declBus(c+181,"ifu_ARPORT", false,-1, 2,0);
        tracep->declBit(c+182,"ifu_RVALID", false,-1);
        tracep->declBit(c+183,"ifu_RREADY", false,-1);
        tracep->declQuad(c+184,"ifu_RDATA", false,-1, 63,0);
        tracep->declBus(c+186,"ifu_RRESP", false,-1, 1,0);
        tracep->declBit(c+187,"ebreak", false,-1);
        tracep->declBus(c+203,"top DW", false,-1, 31,0);
        tracep->declBus(c+204,"top IW", false,-1, 31,0);
        tracep->declBit(c+168,"top clk", false,-1);
        tracep->declBit(c+169,"top rstn", false,-1);
        tracep->declQuad(c+170,"top pc", false,-1, 63,0);
        tracep->declQuad(c+172,"top snxt_pc", false,-1, 63,0);
        tracep->declQuad(c+174,"top dnxt_pc", false,-1, 63,0);
        tracep->declBus(c+176,"top instr", false,-1, 31,0);
        tracep->declBit(c+177,"top ifu_ARVALID", false,-1);
        tracep->declBit(c+178,"top ifu_ARREADY", false,-1);
        tracep->declQuad(c+179,"top ifu_ARADDR", false,-1, 63,0);
        tracep->declBus(c+181,"top ifu_ARPORT", false,-1, 2,0);
        tracep->declBit(c+182,"top ifu_RVALID", false,-1);
        tracep->declBit(c+183,"top ifu_RREADY", false,-1);
        tracep->declQuad(c+184,"top ifu_RDATA", false,-1, 63,0);
        tracep->declBus(c+186,"top ifu_RRESP", false,-1, 1,0);
        tracep->declBit(c+187,"top ebreak", false,-1);
        tracep->declBit(c+1,"top pc_ld", false,-1);
        tracep->declBit(c+2,"top pc_en", false,-1);
        tracep->declQuad(c+3,"top rdata", false,-1, 63,0);
        tracep->declQuad(c+5,"top addr", false,-1, 63,0);
        tracep->declQuad(c+7,"top wdata", false,-1, 63,0);
        tracep->declBus(c+9,"top wlen", false,-1, 3,0);
        tracep->declBit(c+10,"top wen", false,-1);
        tracep->declBit(c+11,"top ren", false,-1);
        tracep->declQuad(c+12,"top imm", false,-1, 63,0);
        tracep->declQuad(c+5,"top result", false,-1, 63,0);
        tracep->declBit(c+14,"top br_asrt", false,-1);
        tracep->declBit(c+188,"top jalr_en", false,-1);
        tracep->declBit(c+189,"top jal_en", false,-1);
        tracep->declBit(c+15,"top wb_en", false,-1);
        tracep->declBit(c+190,"top wb_load", false,-1);
        tracep->declBit(c+16,"top wb_pc", false,-1);
        tracep->declBit(c+17,"top wb_alu", false,-1);
        tracep->declQuad(c+18,"top load_data", false,-1, 63,0);
        tracep->declQuad(c+20,"top rd_data1", false,-1, 63,0);
        tracep->declQuad(c+22,"top rd_data2", false,-1, 63,0);
        tracep->declBit(c+24,"top I_type", false,-1);
        tracep->declBit(c+25,"top S_type", false,-1);
        tracep->declBit(c+191,"top B_type", false,-1);
        tracep->declBit(c+26,"top U_type", false,-1);
        tracep->declBit(c+189,"top J_type", false,-1);
        tracep->declBit(c+27,"top rs1_en", false,-1);
        tracep->declBit(c+28,"top rs2_en", false,-1);
        tracep->declBit(c+29,"top imm_en", false,-1);
        tracep->declBit(c+30,"top lgc_en", false,-1);
        tracep->declBus(c+31,"top lgc_op", false,-1, 3,0);
        tracep->declBit(c+32,"top wlgc_en", false,-1);
        tracep->declBus(c+33,"top wlgc_op", false,-1, 4,0);
        tracep->declBit(c+34,"top mlgc_en", false,-1);
        tracep->declBus(c+192,"top mlgc_op", false,-1, 2,0);
        tracep->declBit(c+35,"top wmlgc_en", false,-1);
        tracep->declBus(c+193,"top wmlgc_op", false,-1, 3,0);
        tracep->declBit(c+191,"top br_en", false,-1);
        tracep->declBus(c+192,"top br_op", false,-1, 2,0);
        tracep->declBit(c+36,"top zero", false,-1);
        tracep->declBit(c+37,"top lb", false,-1);
        tracep->declBit(c+38,"top lh", false,-1);
        tracep->declBit(c+39,"top lw", false,-1);
        tracep->declBit(c+40,"top ld", false,-1);
        tracep->declBit(c+41,"top lbu", false,-1);
        tracep->declBit(c+42,"top lhu", false,-1);
        tracep->declBit(c+43,"top lwu", false,-1);
        tracep->declBit(c+44,"top sb", false,-1);
        tracep->declBit(c+45,"top sh", false,-1);
        tracep->declBit(c+46,"top sw", false,-1);
        tracep->declBit(c+47,"top sd", false,-1);
        tracep->declQuad(c+22,"top wdata_in", false,-1, 63,0);
        tracep->declQuad(c+5,"top addr_in", false,-1, 63,0);
        tracep->declBit(c+48,"top instr_en", false,-1);
        tracep->declBus(c+203,"top pc_gen_inst DW", false,-1, 31,0);
        tracep->declBit(c+168,"top pc_gen_inst clk", false,-1);
        tracep->declBit(c+169,"top pc_gen_inst rstn", false,-1);
        tracep->declQuad(c+12,"top pc_gen_inst imm", false,-1, 63,0);
        tracep->declQuad(c+5,"top pc_gen_inst result", false,-1, 63,0);
        tracep->declBit(c+14,"top pc_gen_inst br_en", false,-1);
        tracep->declBit(c+188,"top pc_gen_inst jalr_en", false,-1);
        tracep->declBit(c+189,"top pc_gen_inst jal_en", false,-1);
        tracep->declQuad(c+172,"top pc_gen_inst snxt_pc", false,-1, 63,0);
        tracep->declQuad(c+174,"top pc_gen_inst dnxt_pc", false,-1, 63,0);
        tracep->declBit(c+1,"top pc_gen_inst pc_ld", false,-1);
        tracep->declQuad(c+170,"top pc_gen_inst pc", false,-1, 63,0);
        tracep->declQuad(c+49,"top pc_gen_inst br_pc", false,-1, 63,0);
        tracep->declQuad(c+5,"top pc_gen_inst jal_pc", false,-1, 63,0);
        tracep->declQuad(c+51,"top pc_gen_inst jalr_pc", false,-1, 63,0);
        tracep->declBit(c+53,"top pc_gen_inst snxt_en", false,-1);
        tracep->declBus(c+203,"top regfile_inst DW", false,-1, 31,0);
        tracep->declBus(c+205,"top regfile_inst AW", false,-1, 31,0);
        tracep->declBit(c+168,"top regfile_inst clk", false,-1);
        tracep->declBit(c+169,"top regfile_inst rstn", false,-1);
        tracep->declBit(c+15,"top regfile_inst wb_en", false,-1);
        tracep->declBit(c+190,"top regfile_inst wb_load", false,-1);
        tracep->declBit(c+16,"top regfile_inst wb_pc", false,-1);
        tracep->declBit(c+17,"top regfile_inst wb_alu", false,-1);
        tracep->declBus(c+194,"top regfile_inst wb_addr", false,-1, 4,0);
        tracep->declQuad(c+18,"top regfile_inst load_data", false,-1, 63,0);
        tracep->declQuad(c+172,"top regfile_inst pc_data", false,-1, 63,0);
        tracep->declQuad(c+5,"top regfile_inst alu_data", false,-1, 63,0);
        tracep->declBus(c+195,"top regfile_inst rd_addr1", false,-1, 4,0);
        tracep->declBus(c+196,"top regfile_inst rd_addr2", false,-1, 4,0);
        tracep->declQuad(c+20,"top regfile_inst rd_data1", false,-1, 63,0);
        tracep->declQuad(c+22,"top regfile_inst rd_data2", false,-1, 63,0);
        tracep->declQuad(c+54,"top regfile_inst wb_data", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+103+i*2,"top regfile_inst gpr", true,(i+0), 63,0);}}
        tracep->declBus(c+167,"top regfile_inst i", false,-1, 31,0);
        tracep->declBus(c+203,"top imm_gen_inst DW", false,-1, 31,0);
        tracep->declBus(c+204,"top imm_gen_inst IW", false,-1, 31,0);
        tracep->declBit(c+24,"top imm_gen_inst I_type", false,-1);
        tracep->declBit(c+25,"top imm_gen_inst S_type", false,-1);
        tracep->declBit(c+191,"top imm_gen_inst B_type", false,-1);
        tracep->declBit(c+26,"top imm_gen_inst U_type", false,-1);
        tracep->declBit(c+189,"top imm_gen_inst J_type", false,-1);
        tracep->declBus(c+176,"top imm_gen_inst instr", false,-1, 31,0);
        tracep->declQuad(c+12,"top imm_gen_inst imm", false,-1, 63,0);
        tracep->declQuad(c+56,"top imm_gen_inst immI_num", false,-1, 63,0);
        tracep->declQuad(c+58,"top imm_gen_inst immS_num", false,-1, 63,0);
        tracep->declQuad(c+60,"top imm_gen_inst immB_num", false,-1, 63,0);
        tracep->declQuad(c+62,"top imm_gen_inst immU_num", false,-1, 63,0);
        tracep->declQuad(c+64,"top imm_gen_inst immJ_num", false,-1, 63,0);
        tracep->declBus(c+203,"top alu_inst DW", false,-1, 31,0);
        tracep->declBit(c+27,"top alu_inst rs1_en", false,-1);
        tracep->declBit(c+2,"top alu_inst pc_en", false,-1);
        tracep->declQuad(c+20,"top alu_inst rs1_data", false,-1, 63,0);
        tracep->declQuad(c+170,"top alu_inst pc_data", false,-1, 63,0);
        tracep->declBit(c+28,"top alu_inst rs2_en", false,-1);
        tracep->declBit(c+29,"top alu_inst imm_en", false,-1);
        tracep->declQuad(c+22,"top alu_inst rs2_data", false,-1, 63,0);
        tracep->declQuad(c+12,"top alu_inst imm_data", false,-1, 63,0);
        tracep->declBit(c+30,"top alu_inst lgc_en", false,-1);
        tracep->declBus(c+31,"top alu_inst lgc_op", false,-1, 3,0);
        tracep->declBit(c+34,"top alu_inst mlgc_en", false,-1);
        tracep->declBus(c+192,"top alu_inst mlgc_op", false,-1, 2,0);
        tracep->declBit(c+35,"top alu_inst wmlgc_en", false,-1);
        tracep->declBus(c+193,"top alu_inst wmlgc_op", false,-1, 3,0);
        tracep->declBit(c+32,"top alu_inst wlgc_en", false,-1);
        tracep->declBus(c+33,"top alu_inst wlgc_op", false,-1, 4,0);
        tracep->declBit(c+191,"top alu_inst br_en", false,-1);
        tracep->declBus(c+192,"top alu_inst br_op", false,-1, 2,0);
        tracep->declQuad(c+5,"top alu_inst result", false,-1, 63,0);
        tracep->declBit(c+14,"top alu_inst br_asrt", false,-1);
        tracep->declBit(c+36,"top alu_inst zero", false,-1);
        tracep->declQuad(c+66,"top alu_inst opdata1", false,-1, 63,0);
        tracep->declQuad(c+68,"top alu_inst opdata2", false,-1, 63,0);
        tracep->declQuad(c+66,"top alu_inst uopdata1", false,-1, 63,0);
        tracep->declQuad(c+68,"top alu_inst uopdata2", false,-1, 63,0);
        tracep->declBus(c+70,"top alu_inst wopdata1", false,-1, 31,0);
        tracep->declBus(c+71,"top alu_inst wopdata2", false,-1, 31,0);
        tracep->declBus(c+70,"top alu_inst uwopdata1", false,-1, 31,0);
        tracep->declBus(c+71,"top alu_inst uwopdata2", false,-1, 31,0);
        tracep->declQuad(c+72,"top alu_inst lgc_result", false,-1, 63,0);
        tracep->declArray(c+74,"top alu_inst multu", false,-1, 127,0);
        tracep->declArray(c+74,"top alu_inst multsu", false,-1, 127,0);
        tracep->declQuad(c+78,"top alu_inst mlgc_result", false,-1, 63,0);
        tracep->declBus(c+80,"top alu_inst wmlgc_result", false,-1, 31,0);
        tracep->declBus(c+81,"top alu_inst wlgc_result", false,-1, 31,0);
        tracep->declBit(c+82,"top alu_inst br_result", false,-1);
        tracep->declBus(c+203,"top memory_inst DW", false,-1, 31,0);
        tracep->declBit(c+169,"top memory_inst rstn", false,-1);
        tracep->declBit(c+37,"top memory_inst lb", false,-1);
        tracep->declBit(c+38,"top memory_inst lh", false,-1);
        tracep->declBit(c+39,"top memory_inst lw", false,-1);
        tracep->declBit(c+40,"top memory_inst ld", false,-1);
        tracep->declBit(c+41,"top memory_inst lbu", false,-1);
        tracep->declBit(c+42,"top memory_inst lhu", false,-1);
        tracep->declBit(c+43,"top memory_inst lwu", false,-1);
        tracep->declBit(c+44,"top memory_inst sb", false,-1);
        tracep->declBit(c+45,"top memory_inst sh", false,-1);
        tracep->declBit(c+46,"top memory_inst sw", false,-1);
        tracep->declBit(c+47,"top memory_inst sd", false,-1);
        tracep->declQuad(c+22,"top memory_inst wdata_in", false,-1, 63,0);
        tracep->declQuad(c+5,"top memory_inst addr_in", false,-1, 63,0);
        tracep->declQuad(c+18,"top memory_inst load_data", false,-1, 63,0);
        tracep->declQuad(c+7,"top memory_inst wdata", false,-1, 63,0);
        tracep->declBus(c+9,"top memory_inst wlen", false,-1, 3,0);
        tracep->declBit(c+10,"top memory_inst wen", false,-1);
        tracep->declBit(c+11,"top memory_inst ren", false,-1);
        tracep->declQuad(c+3,"top memory_inst rdata", false,-1, 63,0);
        tracep->declQuad(c+5,"top memory_inst addr", false,-1, 63,0);
        tracep->declQuad(c+83,"top memory_inst lb_data", false,-1, 63,0);
        tracep->declQuad(c+85,"top memory_inst lh_data", false,-1, 63,0);
        tracep->declQuad(c+87,"top memory_inst lw_data", false,-1, 63,0);
        tracep->declQuad(c+3,"top memory_inst ld_data", false,-1, 63,0);
        tracep->declQuad(c+89,"top memory_inst lbu_data", false,-1, 63,0);
        tracep->declQuad(c+91,"top memory_inst lhu_data", false,-1, 63,0);
        tracep->declQuad(c+93,"top memory_inst lwu_data", false,-1, 63,0);
        tracep->declBus(c+204,"top controlor_inst IW", false,-1, 31,0);
        tracep->declBit(c+168,"top controlor_inst clk", false,-1);
        tracep->declBit(c+169,"top controlor_inst rstn", false,-1);
        tracep->declBit(c+177,"top controlor_inst ifu_ARVALID", false,-1);
        tracep->declBit(c+178,"top controlor_inst ifu_ARREADY", false,-1);
        tracep->declQuad(c+179,"top controlor_inst ifu_ARADDR", false,-1, 63,0);
        tracep->declBus(c+181,"top controlor_inst ifu_ARPORT", false,-1, 2,0);
        tracep->declBit(c+182,"top controlor_inst ifu_RVALID", false,-1);
        tracep->declBit(c+183,"top controlor_inst ifu_RREADY", false,-1);
        tracep->declQuad(c+184,"top controlor_inst ifu_RDATA", false,-1, 63,0);
        tracep->declBus(c+186,"top controlor_inst ifu_RRESP", false,-1, 1,0);
        tracep->declQuad(c+174,"top controlor_inst dnxt_pc", false,-1, 63,0);
        tracep->declBus(c+176,"top controlor_inst instr", false,-1, 31,0);
        tracep->declBit(c+48,"top controlor_inst instr_en", false,-1);
        tracep->declBit(c+1,"top controlor_inst pc_ld", false,-1);
        tracep->declBit(c+15,"top controlor_inst wb_en", false,-1);
        tracep->declBit(c+190,"top controlor_inst wb_load", false,-1);
        tracep->declBit(c+16,"top controlor_inst wb_pc", false,-1);
        tracep->declBit(c+17,"top controlor_inst wb_alu", false,-1);
        tracep->declBit(c+24,"top controlor_inst I_type", false,-1);
        tracep->declBit(c+25,"top controlor_inst S_type", false,-1);
        tracep->declBit(c+191,"top controlor_inst B_type", false,-1);
        tracep->declBit(c+26,"top controlor_inst U_type", false,-1);
        tracep->declBit(c+189,"top controlor_inst J_type", false,-1);
        tracep->declBit(c+27,"top controlor_inst rs1_en", false,-1);
        tracep->declBit(c+2,"top controlor_inst pc_en", false,-1);
        tracep->declBit(c+28,"top controlor_inst rs2_en", false,-1);
        tracep->declBit(c+29,"top controlor_inst imm_en", false,-1);
        tracep->declBit(c+30,"top controlor_inst lgc_en", false,-1);
        tracep->declBus(c+31,"top controlor_inst lgc_op", false,-1, 3,0);
        tracep->declBit(c+32,"top controlor_inst wlgc_en", false,-1);
        tracep->declBus(c+33,"top controlor_inst wlgc_op", false,-1, 4,0);
        tracep->declBit(c+191,"top controlor_inst br_en", false,-1);
        tracep->declBus(c+192,"top controlor_inst br_op", false,-1, 2,0);
        tracep->declBit(c+34,"top controlor_inst mlgc_en", false,-1);
        tracep->declBus(c+192,"top controlor_inst mlgc_op", false,-1, 2,0);
        tracep->declBit(c+35,"top controlor_inst wmlgc_en", false,-1);
        tracep->declBus(c+193,"top controlor_inst wmlgc_op", false,-1, 3,0);
        tracep->declBit(c+189,"top controlor_inst jal_en", false,-1);
        tracep->declBit(c+188,"top controlor_inst jalr_en", false,-1);
        tracep->declBit(c+37,"top controlor_inst lb", false,-1);
        tracep->declBit(c+38,"top controlor_inst lh", false,-1);
        tracep->declBit(c+39,"top controlor_inst lw", false,-1);
        tracep->declBit(c+40,"top controlor_inst ld", false,-1);
        tracep->declBit(c+41,"top controlor_inst lbu", false,-1);
        tracep->declBit(c+42,"top controlor_inst lhu", false,-1);
        tracep->declBit(c+43,"top controlor_inst lwu", false,-1);
        tracep->declBit(c+44,"top controlor_inst sb", false,-1);
        tracep->declBit(c+45,"top controlor_inst sh", false,-1);
        tracep->declBit(c+46,"top controlor_inst sw", false,-1);
        tracep->declBit(c+47,"top controlor_inst sd", false,-1);
        tracep->declBit(c+187,"top controlor_inst ebreak", false,-1);
        tracep->declBit(c+197,"top controlor_inst first_pc_ld", false,-1);
        tracep->declBus(c+206,"top controlor_inst IDLE", false,-1, 1,0);
        tracep->declBus(c+207,"top controlor_inst FETCH", false,-1, 1,0);
        tracep->declBus(c+208,"top controlor_inst EXEC", false,-1, 1,0);
        tracep->declBus(c+95,"top controlor_inst cpu_nstate", false,-1, 1,0);
        tracep->declBus(c+198,"top controlor_inst cpu_cstate", false,-1, 1,0);
        tracep->declBus(c+199,"top controlor_inst opcode", false,-1, 6,0);
        tracep->declBus(c+192,"top controlor_inst funct3", false,-1, 2,0);
        tracep->declBus(c+200,"top controlor_inst funct7", false,-1, 6,0);
        tracep->declBit(c+201,"top controlor_inst lui_en", false,-1);
        tracep->declBit(c+202,"top controlor_inst auipc_en", false,-1);
        tracep->declBit(c+190,"top controlor_inst load_en", false,-1);
        tracep->declBit(c+25,"top controlor_inst store_en", false,-1);
        tracep->declBit(c+96,"top controlor_inst immop_en", false,-1);
        tracep->declBit(c+97,"top controlor_inst immsf_en", false,-1);
        tracep->declBit(c+98,"top controlor_inst wimmop_en", false,-1);
        tracep->declBit(c+99,"top controlor_inst wimmsf_en", false,-1);
        tracep->declBit(c+100,"top controlor_inst rsop_en", false,-1);
        tracep->declBit(c+101,"top controlor_inst wrsop_en", false,-1);
        tracep->declBit(c+34,"top controlor_inst mrsop_en", false,-1);
        tracep->declBit(c+35,"top controlor_inst wmrsop_en", false,-1);
        tracep->declBit(c+102,"top controlor_inst R_type", false,-1);
    }
}

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vtop___024root__traceRegister(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vtop___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vtop___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vtop___024root__traceCleanup, vlSelf);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlSelf->top__DOT__pc_ld));
        tracep->fullBit(oldp+2,(vlSelf->top__DOT__pc_en));
        tracep->fullQData(oldp+3,(vlSelf->top__DOT__rdata),64);
        tracep->fullQData(oldp+5,(vlSelf->top__DOT__result),64);
        tracep->fullQData(oldp+7,(vlSelf->top__DOT__wdata),64);
        tracep->fullCData(oldp+9,(vlSelf->top__DOT__wlen),4);
        tracep->fullBit(oldp+10,(vlSelf->top__DOT__wen));
        tracep->fullBit(oldp+11,(vlSelf->top__DOT__ren));
        tracep->fullQData(oldp+12,(vlSelf->top__DOT__imm),64);
        tracep->fullBit(oldp+14,(vlSelf->top__DOT__br_asrt));
        tracep->fullBit(oldp+15,(vlSelf->top__DOT__wb_en));
        tracep->fullBit(oldp+16,(vlSelf->top__DOT__wb_pc));
        tracep->fullBit(oldp+17,(vlSelf->top__DOT__wb_alu));
        tracep->fullQData(oldp+18,(vlSelf->top__DOT__load_data),64);
        tracep->fullQData(oldp+20,(vlSelf->top__DOT__rd_data1),64);
        tracep->fullQData(oldp+22,(vlSelf->top__DOT__rd_data2),64);
        tracep->fullBit(oldp+24,(vlSelf->top__DOT__I_type));
        tracep->fullBit(oldp+25,(vlSelf->top__DOT__controlor_inst__DOT__store_en));
        tracep->fullBit(oldp+26,(vlSelf->top__DOT__U_type));
        tracep->fullBit(oldp+27,(vlSelf->top__DOT__rs1_en));
        tracep->fullBit(oldp+28,(vlSelf->top__DOT__rs2_en));
        tracep->fullBit(oldp+29,(vlSelf->top__DOT__imm_en));
        tracep->fullBit(oldp+30,(vlSelf->top__DOT__lgc_en));
        tracep->fullCData(oldp+31,(vlSelf->top__DOT__lgc_op),4);
        tracep->fullBit(oldp+32,(vlSelf->top__DOT__wlgc_en));
        tracep->fullCData(oldp+33,(vlSelf->top__DOT__wlgc_op),5);
        tracep->fullBit(oldp+34,(vlSelf->top__DOT__controlor_inst__DOT__mrsop_en));
        tracep->fullBit(oldp+35,(vlSelf->top__DOT__controlor_inst__DOT__wmrsop_en));
        tracep->fullBit(oldp+36,((0ULL == vlSelf->top__DOT__result)));
        tracep->fullBit(oldp+37,(vlSelf->top__DOT__lb));
        tracep->fullBit(oldp+38,(vlSelf->top__DOT__lh));
        tracep->fullBit(oldp+39,(vlSelf->top__DOT__lw));
        tracep->fullBit(oldp+40,(vlSelf->top__DOT__ld));
        tracep->fullBit(oldp+41,(vlSelf->top__DOT__lbu));
        tracep->fullBit(oldp+42,(vlSelf->top__DOT__lhu));
        tracep->fullBit(oldp+43,(vlSelf->top__DOT__lwu));
        tracep->fullBit(oldp+44,(vlSelf->top__DOT__sb));
        tracep->fullBit(oldp+45,(vlSelf->top__DOT__sh));
        tracep->fullBit(oldp+46,(vlSelf->top__DOT__sw));
        tracep->fullBit(oldp+47,(vlSelf->top__DOT__sd));
        tracep->fullBit(oldp+48,(vlSelf->top__DOT__instr_en));
        tracep->fullQData(oldp+49,(vlSelf->top__DOT__pc_gen_inst__DOT__br_pc),64);
        tracep->fullQData(oldp+51,((0xfffffffffffffffeULL 
                                    & vlSelf->top__DOT__result)),64);
        tracep->fullBit(oldp+53,(vlSelf->top__DOT__pc_gen_inst__DOT__snxt_en));
        tracep->fullQData(oldp+54,(vlSelf->top__DOT__regfile_inst__DOT__wb_data),64);
        tracep->fullQData(oldp+56,(vlSelf->top__DOT__imm_gen_inst__DOT__immI_num),64);
        tracep->fullQData(oldp+58,(vlSelf->top__DOT__imm_gen_inst__DOT__immS_num),64);
        tracep->fullQData(oldp+60,(vlSelf->top__DOT__imm_gen_inst__DOT__immB_num),64);
        tracep->fullQData(oldp+62,(vlSelf->top__DOT__imm_gen_inst__DOT__immU_num),64);
        tracep->fullQData(oldp+64,(vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num),64);
        tracep->fullQData(oldp+66,(vlSelf->top__DOT__alu_inst__DOT__opdata1),64);
        tracep->fullQData(oldp+68,(vlSelf->top__DOT__alu_inst__DOT__opdata2),64);
        tracep->fullIData(oldp+70,((IData)(vlSelf->top__DOT__alu_inst__DOT__opdata1)),32);
        tracep->fullIData(oldp+71,((IData)(vlSelf->top__DOT__alu_inst__DOT__opdata2)),32);
        tracep->fullQData(oldp+72,(vlSelf->top__DOT__alu_inst__DOT__lgc_result),64);
        tracep->fullWData(oldp+74,(vlSelf->top__DOT__alu_inst__DOT__multu),128);
        tracep->fullQData(oldp+78,(vlSelf->top__DOT__alu_inst__DOT__mlgc_result),64);
        tracep->fullIData(oldp+80,(vlSelf->top__DOT__alu_inst__DOT__wmlgc_result),32);
        tracep->fullIData(oldp+81,(vlSelf->top__DOT__alu_inst__DOT__wlgc_result),32);
        tracep->fullBit(oldp+82,(vlSelf->top__DOT__alu_inst__DOT__br_result));
        tracep->fullQData(oldp+83,(vlSelf->top__DOT__memory_inst__DOT__lb_data),64);
        tracep->fullQData(oldp+85,(vlSelf->top__DOT__memory_inst__DOT__lh_data),64);
        tracep->fullQData(oldp+87,(vlSelf->top__DOT__memory_inst__DOT__lw_data),64);
        tracep->fullQData(oldp+89,((QData)((IData)(
                                                   (0xffU 
                                                    & (IData)(vlSelf->top__DOT__rdata))))),64);
        tracep->fullQData(oldp+91,((QData)((IData)(
                                                   (0xffffU 
                                                    & (IData)(vlSelf->top__DOT__rdata))))),64);
        tracep->fullQData(oldp+93,((QData)((IData)(vlSelf->top__DOT__rdata))),64);
        tracep->fullCData(oldp+95,(vlSelf->top__DOT__controlor_inst__DOT__cpu_nstate),2);
        tracep->fullBit(oldp+96,(vlSelf->top__DOT__controlor_inst__DOT__immop_en));
        tracep->fullBit(oldp+97,(vlSelf->top__DOT__controlor_inst__DOT__immsf_en));
        tracep->fullBit(oldp+98,(vlSelf->top__DOT__controlor_inst__DOT__wimmop_en));
        tracep->fullBit(oldp+99,(vlSelf->top__DOT__controlor_inst__DOT__wimmsf_en));
        tracep->fullBit(oldp+100,(vlSelf->top__DOT__controlor_inst__DOT__rsop_en));
        tracep->fullBit(oldp+101,(vlSelf->top__DOT__controlor_inst__DOT__wrsop_en));
        tracep->fullBit(oldp+102,(vlSelf->top__DOT__controlor_inst__DOT__R_type));
        tracep->fullQData(oldp+103,(vlSelf->top__DOT__regfile_inst__DOT__gpr[0]),64);
        tracep->fullQData(oldp+105,(vlSelf->top__DOT__regfile_inst__DOT__gpr[1]),64);
        tracep->fullQData(oldp+107,(vlSelf->top__DOT__regfile_inst__DOT__gpr[2]),64);
        tracep->fullQData(oldp+109,(vlSelf->top__DOT__regfile_inst__DOT__gpr[3]),64);
        tracep->fullQData(oldp+111,(vlSelf->top__DOT__regfile_inst__DOT__gpr[4]),64);
        tracep->fullQData(oldp+113,(vlSelf->top__DOT__regfile_inst__DOT__gpr[5]),64);
        tracep->fullQData(oldp+115,(vlSelf->top__DOT__regfile_inst__DOT__gpr[6]),64);
        tracep->fullQData(oldp+117,(vlSelf->top__DOT__regfile_inst__DOT__gpr[7]),64);
        tracep->fullQData(oldp+119,(vlSelf->top__DOT__regfile_inst__DOT__gpr[8]),64);
        tracep->fullQData(oldp+121,(vlSelf->top__DOT__regfile_inst__DOT__gpr[9]),64);
        tracep->fullQData(oldp+123,(vlSelf->top__DOT__regfile_inst__DOT__gpr[10]),64);
        tracep->fullQData(oldp+125,(vlSelf->top__DOT__regfile_inst__DOT__gpr[11]),64);
        tracep->fullQData(oldp+127,(vlSelf->top__DOT__regfile_inst__DOT__gpr[12]),64);
        tracep->fullQData(oldp+129,(vlSelf->top__DOT__regfile_inst__DOT__gpr[13]),64);
        tracep->fullQData(oldp+131,(vlSelf->top__DOT__regfile_inst__DOT__gpr[14]),64);
        tracep->fullQData(oldp+133,(vlSelf->top__DOT__regfile_inst__DOT__gpr[15]),64);
        tracep->fullQData(oldp+135,(vlSelf->top__DOT__regfile_inst__DOT__gpr[16]),64);
        tracep->fullQData(oldp+137,(vlSelf->top__DOT__regfile_inst__DOT__gpr[17]),64);
        tracep->fullQData(oldp+139,(vlSelf->top__DOT__regfile_inst__DOT__gpr[18]),64);
        tracep->fullQData(oldp+141,(vlSelf->top__DOT__regfile_inst__DOT__gpr[19]),64);
        tracep->fullQData(oldp+143,(vlSelf->top__DOT__regfile_inst__DOT__gpr[20]),64);
        tracep->fullQData(oldp+145,(vlSelf->top__DOT__regfile_inst__DOT__gpr[21]),64);
        tracep->fullQData(oldp+147,(vlSelf->top__DOT__regfile_inst__DOT__gpr[22]),64);
        tracep->fullQData(oldp+149,(vlSelf->top__DOT__regfile_inst__DOT__gpr[23]),64);
        tracep->fullQData(oldp+151,(vlSelf->top__DOT__regfile_inst__DOT__gpr[24]),64);
        tracep->fullQData(oldp+153,(vlSelf->top__DOT__regfile_inst__DOT__gpr[25]),64);
        tracep->fullQData(oldp+155,(vlSelf->top__DOT__regfile_inst__DOT__gpr[26]),64);
        tracep->fullQData(oldp+157,(vlSelf->top__DOT__regfile_inst__DOT__gpr[27]),64);
        tracep->fullQData(oldp+159,(vlSelf->top__DOT__regfile_inst__DOT__gpr[28]),64);
        tracep->fullQData(oldp+161,(vlSelf->top__DOT__regfile_inst__DOT__gpr[29]),64);
        tracep->fullQData(oldp+163,(vlSelf->top__DOT__regfile_inst__DOT__gpr[30]),64);
        tracep->fullQData(oldp+165,(vlSelf->top__DOT__regfile_inst__DOT__gpr[31]),64);
        tracep->fullIData(oldp+167,(vlSelf->top__DOT__regfile_inst__DOT__i),32);
        tracep->fullBit(oldp+168,(vlSelf->clk));
        tracep->fullBit(oldp+169,(vlSelf->rstn));
        tracep->fullQData(oldp+170,(vlSelf->pc),64);
        tracep->fullQData(oldp+172,(vlSelf->snxt_pc),64);
        tracep->fullQData(oldp+174,(vlSelf->dnxt_pc),64);
        tracep->fullIData(oldp+176,(vlSelf->instr),32);
        tracep->fullBit(oldp+177,(vlSelf->ifu_ARVALID));
        tracep->fullBit(oldp+178,(vlSelf->ifu_ARREADY));
        tracep->fullQData(oldp+179,(vlSelf->ifu_ARADDR),64);
        tracep->fullCData(oldp+181,(vlSelf->ifu_ARPORT),3);
        tracep->fullBit(oldp+182,(vlSelf->ifu_RVALID));
        tracep->fullBit(oldp+183,(vlSelf->ifu_RREADY));
        tracep->fullQData(oldp+184,(vlSelf->ifu_RDATA),64);
        tracep->fullCData(oldp+186,(vlSelf->ifu_RRESP),2);
        tracep->fullBit(oldp+187,(vlSelf->ebreak));
        tracep->fullBit(oldp+188,((0x67U == (0x7fU 
                                             & vlSelf->instr))));
        tracep->fullBit(oldp+189,((0x6fU == (0x7fU 
                                             & vlSelf->instr))));
        tracep->fullBit(oldp+190,((3U == (0x7fU & vlSelf->instr))));
        tracep->fullBit(oldp+191,((0x63U == (0x7fU 
                                             & vlSelf->instr))));
        tracep->fullCData(oldp+192,((7U & (vlSelf->instr 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+193,((8U | (7U & (vlSelf->instr 
                                                 >> 0xcU)))),4);
        tracep->fullCData(oldp+194,((0x1fU & (vlSelf->instr 
                                              >> 7U))),5);
        tracep->fullCData(oldp+195,((0x1fU & (vlSelf->instr 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+196,((0x1fU & (vlSelf->instr 
                                              >> 0x14U))),5);
        tracep->fullBit(oldp+197,(vlSelf->top__DOT__controlor_inst__DOT__first_pc_ld));
        tracep->fullCData(oldp+198,(vlSelf->top__DOT__controlor_inst__DOT__cpu_cstate),2);
        tracep->fullCData(oldp+199,((0x7fU & vlSelf->instr)),7);
        tracep->fullCData(oldp+200,((vlSelf->instr 
                                     >> 0x19U)),7);
        tracep->fullBit(oldp+201,((0x37U == (0x7fU 
                                             & vlSelf->instr))));
        tracep->fullBit(oldp+202,((0x17U == (0x7fU 
                                             & vlSelf->instr))));
        tracep->fullIData(oldp+203,(0x40U),32);
        tracep->fullIData(oldp+204,(0x20U),32);
        tracep->fullIData(oldp+205,(5U),32);
        tracep->fullCData(oldp+206,(0U),2);
        tracep->fullCData(oldp+207,(1U),2);
        tracep->fullCData(oldp+208,(2U),2);
    }
}
