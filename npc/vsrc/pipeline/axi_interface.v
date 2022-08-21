module axi_interface(
	input   wire            clk         ,
	input   wire            rstn        ,
  input   wire    [63:0]  pc          ,

  output  wire     [31:0]  instr       ,
  output  wire             instr_valid ,

//	input		wire		[63:0]	mm_addr		  ,
//	input		wire    [63:0]  mm_wdata    ,
//  input   wire    [3:0]   mm_wlen     ,
//  input   wire            mm_wen      ,
//  output  wire            mm_wvalid   ,
//
//  output  wire    [63:0]  mm_rdata    ,
//  input   wire            mm_ren      ,
//  output  wire            mm_rvalid   ,

//-------read require channel--------
  output  reg     [3:0]   ARID     ,
  output  wire    [63:0]  ARADDR   ,
  output  reg     [7:0]   ARLEN    ,
  output  reg     [2:0]   ARSIZE   ,
  output  reg     [1:0]   ARBURST  ,
  output  wire            ARLOCK   ,
  output  wire    [3:0]   ARCACHE  ,
  output  reg     [2:0]   ARPORT   ,
  output  wire    [3:0]   ARQOS    ,
  output  wire    [3:0]   ARREGION ,
//output  wire            ARUSER   ,
  output  reg             ARVALID  ,
  input   wire            ARREADY  ,

//-------read response channel-------
  input   wire    [3:0]   RID      ,
  input   reg     [63:0]  RDATA    ,
  input   reg     [1:0]   RRESP    ,
  input   wire            RLAST    ,
//input   wire            RUSER    ,
  input   reg             RVALID   ,
  output  wire            RREADY   

//-------write require channel-------
//  output  wire    [3:0]   AWID        ,
//  output  wire    [63:0]  AWADDR      ,
//  output  wire    [7:0]   AWLEN       ,
//  output  wire    [2:0]   AWSIZE      ,
//  output  wire    [1:0]   AWBURST     ,
//  output  wire            AWLOCK      ,
//  output  wire    [3:0]   AWCACHE     ,
//  output  wire    [2:0]   AWPORT      ,
//  output  wire    [3:0]   AWQOS       ,
//  output  wire    [3:0]   AWREGION    ,
//  output  wire            AWUSER      ,
//  output  wire            AWVALID     ,
//  input   wire            AWREADY     ,

//-------write data channel----------
//  output  wire    [3:0]   WID         ,
//  output  wire    [63:0]  WDATA       ,
//  output  wire    [7:0]   WSTRB       ,
//  output  wire            WLAST       ,
//  output  wire            WUSER       ,
//  output  wire            WVALID      ,
//  input   wire            RREADY      ,
//
////-------write response channel-------
//  input   wire    [3:0]   BID         , 
//  input   wire    [1:0]   BRESP       , 
//  input   wire            BUSER       ,
//  input   wire            BVALID      ,
//  output  wire            BREADY    
);


//--------abstract the posedge of the rstn---------------

reg delay_rstn;
always@(posedge clk)
  delay_rstn <= rstn;

wire  posedge_rstn = rstn & ~delay_rstn;

assign  ARADDR = pc ;

localparam IDLE = 2'b00;
localparam REQU = 2'b01;
localparam RESP = 2'b10;

localparam ID_instr = 4'b0;
//localparam ID_data  = 4'b1;

//localparam AxSIZE_1   = 3'b000;
//localparam AxSIZE_2   = 3'b001;
localparam AxSIZE_4   = 3'b010;
//localparam AxSIZE_8   = 3'b011;
//localparam AxSIZE_16  = 3'b100;
//localparam AxSIZE_32  = 3'b101;
//localparam AxSIZE_64  = 3'b110;
//localparam AxSIZE_128 = 3'b111;

//localparam AxBURST_FIXED = 2'b00;
localparam AxBURST_INCR  = 2'b01;
//localparam AxBURST_WRAP  = 2'b10;

localparam AxPORT_Instr = 3'b100;
//localparam AxPORT_Data  = 3'b000;

localparam xRESP_OKAY   = 2'b00;
//localparam xRESP_EXOKAY = 2'b01;
//localparam xRESP_SLVERR = 2'b10;
//localparam xRESP_DECERR = 2'b11;

reg [1:0]  nstate;
reg [1:0]  cstate;

always@(posedge clk) begin
  if(!rstn)
    cstate <= IDLE;
  else
    cstate <= nstate;
end

wire  rresp_instr_en = (RVALID && RRESP==xRESP_OKAY && RID==4'b0 && RLAST==1'b1);

always@(*) begin
  case (cstate)
    IDLE : nstate = posedge_rstn ? REQU : IDLE ;

    REQU : nstate = ( ARREADY )  ? RESP : REQU;

    RESP : nstate = rresp_instr_en ? REQU : RESP ;

    default : nstate = IDLE;
  endcase
end

always@(posedge clk) begin
  if(!rstn) begin
     ARVALID     <= 'b0  ;  
     ARID        <= 'b0  ; 
     ARLEN       <= 'b0  ;  
     ARSIZE      <= 'b0  ;  
     ARBURST     <= 'b0  ;
     ARLOCK      <= 'b0  ;
     ARCACHE     <= 'b0  ;
     ARQOS       <= 'b0  ;
     ARREGION    <= 'b0  ;
     ARPORT      <= 'b0  ;
     RREADY      <= 'b0  ;
  end 
  else begin
    RREADY <= 1'b1;
    case ( cstate ) 
      IDLE : begin 
               if( posedge_rstn ) begin
                   ARVALID     <=  1'b1          ;  
                   ARID        <=  ID_instr      ; 
                   ARLEN       <=  8'b0          ;  
                   ARSIZE      <=  AxSIZE_4      ; 
                   ARBURST     <=  AxBURST_INCR  ;  
                   ARLOCK      <=  1'b0          ;
                   ARCACHE     <=  4'b0          ;
                   ARQOS       <=  4'b0          ;
                   ARREGION    <=  4'b0          ;
                   ARPORT      <=  AxPORT_Instr  ;
               end
             end

      REQU : begin
               if( ARREADY==0 ) begin
                   ARVALID     <= ARVALID       ;  
                   ARID        <= ARID          ; 
                   ARLEN       <= ARLEN         ;  
                   ARSIZE      <= ARSIZE        ; 
                   ARBURST     <= ARBURST       ;  
                   ARLOCK      <= ARLOCK        ;
                   ARCACHE     <= ARCACHE       ;
                   ARQOS       <= ARQOS         ;
                   ARREGION    <= ARREGION      ;
                   ARPORT      <= ARPORT        ;
             end
             else begin
                   ARVALID <= 1'b0;
             end
           end
      RESP : if( rresp_instr_en ) begin
                //load the new ARchannel data
                //execute the instruction
                   ARVALID     <=  1'b1          ;  
                   ARID        <=  ID_instr      ; 
                   ARLEN       <=  8'b0          ;  
                   ARSIZE      <=  AxSIZE_4      ; 
                   ARBURST     <=  AxBURST_INCR  ;  
                   ARLOCK      <=  1'b0          ;
                   ARCACHE     <=  4'b0          ;
                   ARQOS       <=  4'b0          ;
                   ARREGION    <=  4'b0          ;
                   ARPORT      <=  AxPORT_Instr  ;
             end
             else begin
               //wait for instruction come back
               //do nothing
                   ARVALID     <= 1'b0    ;  
             end
    default : ;
    endcase
  end
end

assign  instr = RDATA[31:0];
assign  instr_valid = rresp_instr_en ;


endmodule

