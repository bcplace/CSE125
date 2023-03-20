module fifo_1r1w
 #(parameter [31:0] width_p = 10
  ,parameter [31:0] depth_p = 20
  ) 
  (input [0:0] clk_i
  ,input [0:0] reset_i

  ,input [width_p - 1:0] data_i
  ,input [0:0] valid_i
  ,output [0:0] ready_o 

  ,output [0:0] valid_o 
  ,output [width_p - 1:0] data_o 
  ,input [0:0] yumi_i
  );
  
  logic [$clog2(depth_p) - 1:0] rd_ptr_l, wr_ptr_l;
  wire [$clog2(depth_p) - 1:0] rd_ptr_w, wr_ptr_w;
  logic [0:0] ready_l, valid_l;
  wire [0:0] full_w;
  
  assign rd_ptr_w = rd_ptr_l;
  assign wr_ptr_w = wr_ptr_l;
  assign ready_o = ready_l;
  assign valid_o = valid_l;
  /* verilator lint_off WIDTH */
  assign full_w = (rd_ptr_l == (wr_ptr_l + 1)) || 
  		  ((rd_ptr_l == 0) && (wr_ptr_l == (depth_p - 1)));
  /* verilator lint_on WIDTH */
  ram_1r1w_sync
  #(width_p,depth_p)
  ram_inst
  (.clk_i(clk_i)
  ,.reset_i(reset_i)
  ,.wr_valid_i(valid_i && ~full_w)
  ,.wr_data_i(data_i)
  ,.wr_addr_i(wr_ptr_w)
  ,.rd_addr_i(rd_ptr_w)
  ,.rd_data_o(data_o)
  );
  
  always_ff @(posedge clk_i) begin
  	if (reset_i) begin
  		rd_ptr_l <= 0;
  		wr_ptr_l <= 0;
  		ready_l <= 1'b1;
  	end else begin
  	// look at whiteboard in lab for diagram of process
  		// writer
  		if (valid_i && ready_o) begin
  			valid_l <= 1'b1;
  			ready_l <= 1'b0;
  			// depth_p is much longer than wr_ptr_l
  			// so verilator doesn't like it
  			/* verilator lint_off WIDTH */
  			if (wr_ptr_l == (depth_p - 1)) begin
  			/* verilator lint_on WIDTH */
  				wr_ptr_l <= 0;
  			end else begin
  				wr_ptr_l <= wr_ptr_l + 1;
  			end
  		end 
  		// reader
  		if (valid_o && yumi_i) begin
  			ready_l <= 1'b1;
  			valid_l <= 1'b0;
  			// depth_p is much longer than wr_ptr_l
  			// so verilator doesn't like it
  			/* verilator lint_off WIDTH */
  			if (rd_ptr_l == (depth_p - 1)) begin
  			/* verilator lint_on WIDTH */
  				rd_ptr_l <= 0;
  			end else begin
  				rd_ptr_l <= rd_ptr_l + 1;
  			end
  		end
  		
  		
  	end
  	
  end
  
endmodule

