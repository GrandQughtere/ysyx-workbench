module ifu(
  input   wire          clk              ,
  input   wire          rstn             ,

  input   wire          jump_en          ,

  input   wire  [63:0]  jump_pc          ,
  output  wire  [63:0]  snxt_pc          ,
  output  wire  [63:0]  dnxt_pc          ,

  output  reg   [63:0]    pc             ,

  input   wire  [31:0]    instr          ,

  output  reg   [63:0]    ifu_pc         ,
  output  reg   [31:0]    ifu_instr      ,
  output  reg   [63:0]    ifu_snxt_pc    ,
  output  reg             ifu_valid      ,

  input   wire            hazard_stop     ,
  input   wire            flush_nop

);


assign  snxt_pc = pc + 4;

assign  dnxt_pc = (jump_en) ? jump_pc : snxt_pc ;

always@(posedge clk) begin
  if(!rstn)
    pc <= 64'h80000000 ;
  else if( hazard_stop & ( !jump_en ) )
    pc <= pc ;
  else
    pc <= dnxt_pc;
end

always@(posedge clk) begin
  if(!rstn) begin
    ifu_pc          <= 64'b0;
    ifu_instr       <= 32'b0;
    ifu_snxt_pc     <= 64'b0;
    ifu_valid       <=  1'b0;
  end else if (flush_nop) begin
    ifu_pc          <= pc     ;
    ifu_instr       <= 32'h13 ;
    ifu_snxt_pc     <= snxt_pc;
    ifu_valid       <=  1'b0  ;
  end else if (hazard_stop) begin
    ifu_pc          <= ifu_pc   ;
    ifu_instr       <= ifu_instr;
    ifu_snxt_pc     <= ifu_snxt_pc;
    ifu_valid       <= ifu_valid  ;
  end else begin
    ifu_pc          <= pc     ;
    ifu_instr       <= instr  ;
    ifu_snxt_pc     <= snxt_pc;
    ifu_valid       <=  1'b1  ;
  end
end

endmodule

