module imm_gen
#(
  parameter DW = 64,
  parameter IW = 32

) (

  input   wire                I_type,
  input   wire                S_type,
  input   wire                B_type,
  input   wire                U_type,
  input   wire                J_type,
  input   wire    [IW-1:0]      inst,

  output  wire    [DW-1:0]       imm

);
  

  wire    [DW-1:0]    immI_num ;
  wire    [DW-1:0]    immS_num ;
  wire    [DW-1:0]    immB_num ;
  wire    [DW-1:0]    immU_num ;
  wire    [DW-1:0]    immJ_num ;

  assign    immI_num = { {53{inst[IW-1]}}, inst[30:20] };
  assign    immS_num = { {53{inst[IW-1]}}, inst[30:25], inst[11:7] };
  assign    immS_num = { {52{1'b0}}, inst[31:25], inst[11:7] };
  assign    immB_num = { {52{inst[IW-1]}}, inst[7], inst[30:25], inst[11:8], 1'b0 };
  assign    immU_num = { {33{inst[IW-1]}}, inst[30:12], 12'b0 };
  assign    immJ_num = { {44{inst[IW-1]}}, inst[19:12], inst[20], inst[30:21], 1'b0 };

  assign       imm = ( {DW{I_type}} & immI_num ) |
                     ( {DW{S_type}} & immS_num ) |
                     ( {DW{B_type}} & immB_num ) |
                     ( {DW{U_type}} & immU_num ) |
                     ( {DW{J_type}} & immJ_num ) ;

endmodule

