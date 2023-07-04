module axi_full#(
    	parameter  C_M_TARGET_SLAVE_BASE_ADDR	= 32'h40000000,
		parameter integer C_M_AXI_BURST_LEN	    = 16,//支持（1,2,4，8，16，32，64，128，256）
		parameter integer C_M_AXI_ID_WIDTH	    = 1,
		parameter integer C_M_AXI_ADDR_WIDTH	= 32,
		parameter integer C_M_AXI_DATA_WIDTH	= 32,
		parameter integer C_M_AXI_AWUSER_WIDTH	= 0,
		parameter integer C_M_AXI_ARUSER_WIDTH	= 0,
		parameter integer C_M_AXI_WUSER_WIDTH	= 0,
		parameter integer C_M_AXI_RUSER_WIDTH	= 0,
		parameter integer C_M_AXI_BUSER_WIDTH	= 0 
)(
        input  wire                                  M_AXI_ACLK      ,
		input  wire                                  M_AXI_ARESETN   ,
        // address write
		output wire [C_M_AXI_ID_WIDTH-1 : 0]        M_AXI_AWID      ,
		output wire [C_M_AXI_ADDR_WIDTH-1 : 0]      M_AXI_AWADDR    ,
		output wire [7 : 0]                         M_AXI_AWLEN     ,
		output wire [2 : 0]                         M_AXI_AWSIZE    ,
		output wire [1 : 0]                         M_AXI_AWBURST   ,
		output wire                                 M_AXI_AWLOCK    ,
		output wire [3 : 0]                         M_AXI_AWCACHE   ,
		output wire [2 : 0]                         M_AXI_AWPROT    ,
		output wire [3 : 0]                         M_AXI_AWQOS     ,
		output wire [C_M_AXI_AWUSER_WIDTH-1 : 0]    M_AXI_AWUSER    ,
		output wire                                 M_AXI_AWVALID   ,
		input  wire                                  M_AXI_AWREADY   ,

		output wire [C_M_AXI_DATA_WIDTH-1 : 0]      M_AXI_WDATA     ,
		output wire [C_M_AXI_DATA_WIDTH/8-1 : 0]    M_AXI_WSTRB     ,
		output wire                                 M_AXI_WLAST     ,
		output wire [C_M_AXI_WUSER_WIDTH-1 : 0]     M_AXI_WUSER     ,
		output wire                                 M_AXI_WVALID    ,
		input  wire                                  M_AXI_WREADY    ,

		input  wire [C_M_AXI_ID_WIDTH-1 : 0]         M_AXI_BID       ,
		input  wire [1 : 0]                          M_AXI_BRESP     ,
		input  wire [C_M_AXI_BUSER_WIDTH-1 : 0]      M_AXI_BUSER     ,
		input  wire                                  M_AXI_BVALID    ,
		output wire                                 M_AXI_BREADY    ,

		output wire [C_M_AXI_ID_WIDTH-1 : 0]        M_AXI_ARID      ,
		output wire [C_M_AXI_ADDR_WIDTH-1 : 0]      M_AXI_ARADDR    ,
		output wire [7 : 0]                         M_AXI_ARLEN     ,
		output wire [2 : 0]                         M_AXI_ARSIZE    ,
		output wire [1 : 0]                         M_AXI_ARBURST   ,
		output wire                                 M_AXI_ARLOCK    ,
		output wire [3 : 0]                         M_AXI_ARCACHE   ,
		output wire [2 : 0]                         M_AXI_ARPROT    ,
		output wire [3 : 0]                         M_AXI_ARQOS     ,
		output wire [C_M_AXI_ARUSER_WIDTH-1 : 0]    M_AXI_ARUSER    ,
		output wire                                 M_AXI_ARVALID   ,
		input  wire                                  M_AXI_ARREADY   ,

		input  wire [C_M_AXI_ID_WIDTH-1 : 0]         M_AXI_RID       ,
		input  wire [C_M_AXI_DATA_WIDTH-1 : 0]       M_AXI_RDATA     ,
		input  wire [1 : 0]                          M_AXI_RRESP     ,
		input  wire                                  M_AXI_RLAST     ,
		input  wire [C_M_AXI_RUSER_WIDTH-1 : 0]      M_AXI_RUSER     ,
		input  wire                                  M_AXI_RVALID    ,
		output wire                                 M_AXI_RREADY
);

function integer clogb2(input integer number) begin //caculate log2
    for(clogb2 = 0;number > 0;clogb2 = clogb2 + 1) begin
        number = number >> 1;
    end
end

//##################### parameter ################


//##################### status ################

//##################### register ################
reg [C_M_AXI_ADDR_WIDTH - 1 : 0] r_m_axi_awaddr;    
reg                              r_m_axi_awvalid;

reg [C_M_AXI_DATA_WIDTH - 1 : 0] r_m_axi_Wdata;
reg                              r_m_wlast;
reg                             r_m_axi_wvalid;

reg [C_M_AXI_ADDR_WIDTH - 1 : 0] r_m_axi_araddr;

//##################### wire ################

//##################### segment logic ################
assign M_AXI_AWID    =    'd0                               ;
assign M_AXI_AWLEN   =    C_M_AXI_BURST_LEN                 ; // length of burst
assign M_AXI_AWSIZE  =    clogb2(C_M_AXI_DATA_WIDTH/8 - 1)   ; // caculate the length of burst
assign M_AXI_AWBURST =    2'n01                             ; // fixed INCR  
assign M_AXI_AWLOCK  =    'd0                               ;
assign M_AXI_AWCACHE =    4'b0010                           ; // normal nonbufferable  
assign M_AXI_AWPROT  =    'd0                               ; // unprivileged access  
assign M_AXI_AWQOS   =    'd0                               ; // default QoS
assign M_AXI_AWUSER  =    'd0                               ; // default user
assign M_AXI_AWADDR  =     r_m_axi_awaddr                   ;
assign M_AXI_AWVALID =     r_m_axi_awvalid                  ;

assign M_AXI_WDATA  = r_m_axi_Wdata                 ;
assign M_AXI_WSTRB  = {C_M_AXI_DATA_WIDTH{1'b1}}    ; // write strobe
assign M_AXI_WLAST  = r_m_wlast                     ;
assign M_AXI_WUSER  = 'd0                           ;
assign M_AXI_WVALID = r_m_axi_wvalid                ;

assign M_AXI_BREADY = 1'b1                          ;

assign M_AXI_ARID    = 'd0                              ;
assign M_AXI_ARADDR  = r_m_axi_araddr + C_M_TARGET_SLAVE_BASE_ADDR;
assign M_AXI_ARLEN   = C_M_AXI_BURST_LEN                ;
assign M_AXI_ARSIZE  = clogb2(C_M_AXI_DATA_WIDTH/8 -1)  ;
assign M_AXI_ARBURST = 2'b01                            ;
assign M_AXI_ARLOCK  = 'd0                              ;
assign M_AXI_ARCACHE = 4'b0010                          ;
assign M_AXI_ARPROT  = 'd0                              ;
assign M_AXI_ARQOS   = 'd0                              ;
assign M_AXI_ARUSER  = 'd0                              ;
assign M_AXI_ARVALID = r_m_axi_arvalid                  ;
endmodule