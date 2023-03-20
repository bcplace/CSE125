module counter
  #(parameter width_p = 4)
   (input [0:0] clk_i
   ,input [0:0] reset_i
   ,input [0:0] up_i
   ,input [0:0] down_i
   ,output [width_p-1:0] counter_o);

   // Implement a parameterized up/down counter. You must use behavioral verilog
   //
   // counter_o must reset to '0 at the positive edge of clk_i when reset_i is 1
   //
   // counter_o must have the following behavior at the positive edge of clk_i when reset_i is 0:
   // 
   // * Maintain the same value when up_i and down_i are both 1 or both 0.
   // 
   // * Increment by 1 when up_i is 1 and down_i is 0
   //
   // * Decrement by 1 when down_i is 1 and up_i is 0 
   //
   // * Use two's complement: -1 == '1 (Remember: decrementing by 1 is the same as adding negative 1)
   //
   // If the counter value overflows, return to 0. If the counter value underflows, return to the maximum value.
   //
   // (In other words you don't need to handle over/underflow conditions).
   // 
   // Your code here:
   logic [width_p - 1 : 0] dffin_l, dffout_l; 
   logic [width_p - 1 : 0] addin_l = '0;
   wire [0 : 0] ofv;
   adder
   #(width_p)
   adder_inst
   (.a_i(dffout_l)
   ,.b_i(addin_l)
   ,.sum_o({ofv,dffin_l})
   );
   
   always_comb begin
   
   	if ((up_i == 1'b1) && (down_i == 1'b0)) begin
   		//dffin_l = dffout_l + 1;
   		addin_l = {{{(width_p - 1){1'b0}}},1'b1};
   		/*
   		adder
   		#(width_p)
   		adder_inst
   		(.a_i(dffout_l)
   		,.b_i(1)
   		,.sum_o(dffin_l)
   		);
   		*/
   	end else if ((up_i == 1'b0) && (down_i == 1'b1)) begin
   		//dffin_l = dffout_l + -1;
   		addin_l = {(width_p){1'b1}};
   		/*
   		adder
   		#(width_p)
   		adder_inst
   		(.a_i(dffout_l)
   		,.b_i(-1)
   		,.sum_o(dffin_l)
   		);
   		*/
   	end else begin
   		//dffin_l = dffout_l;
   		addin_l = '0;
   	end
   
   end
   
   for (genvar i = 0; i < width_p; i++) begin
   	
   	always_ff @(posedge clk_i) begin
   		if (reset_i) begin
   			dffout_l[i] <= 1'b0;
   		end else begin
   			dffout_l[i] <= dffin_l[i];
   		end
   	end
   	
   end 
   
   assign counter_o = dffout_l;
   
   
   
endmodule


module adder
  #(parameter width_p = 1)
  (input [width_p - 1 : 0] a_i
  ,input [width_p - 1 : 0] b_i
  ,output [width_p : 0] sum_o); // Note, the missing -1 is not an error!

   // Implement a parameterized Adder Module (adder). You must use behavioral verilog
   // 
   // Your adder module must correctly compute the sum of A and B for any given value of width_p.
   //
   // Your adder module must correctly handle overflow (i.e. the bit at index width_p in sum_o)
   //
   // Your code here:
   assign sum_o = a_i + b_i;
   
endmodule

