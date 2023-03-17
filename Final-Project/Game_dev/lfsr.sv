module lfsr
   #(parameter width_p = 5)
   (input [0:0] clk_i
   ,input [0:0] reset_i
   ,output [width_p - 1:0] data_o);

   // Implement a 5-bit Many-to-One Linear Feedback Shift Register
   //
   // *** You may use any previously created module from this lab ***
   //
   // Your solution must include behavioral verilog written in this file.
   // 
   // Your LFSR should reset to 5'b00001 at the positive edge of clk_i when reset_i is high
   // 
   // Your code here:
   logic [width_p - 1 : 0] dff_l;
   
   always_ff @(posedge clk_i) begin
   	if (reset_i) begin
   		dff_l[0] <= 1'b1;
   	end else begin
   		dff_l[0] <= dff_l[1] ^ dff_l[width_p - 1];
   	end
   end
   
   for (genvar i = 1; i < width_p; i++) begin
   	
   	always_ff @(posedge clk_i) begin
   		if (reset_i) begin
   			dff_l[i] <= 1'b0;
   		end else begin
   			dff_l[i] <= dff_l[i-1];
   		end
   	end
   	
   end 
   
   assign data_o = dff_l;
   
endmodule


