//Sine wave generator
module sine(
input clk_i,
input reset_i,
input ready_i,
output valid_o,
output [23:0]sine_o
);

ram_1r1w_sync
     #(.width_p(24), .depth_p(32), .filename_p("sine.hex"))
     LUT
     (.clk_i(clk_i), .reset_i(reset_i), .wr_valid_i(1'b0), .wr_data_i(24'd0),
     .wr_addr_i(5'd0), .rd_addr_i(phase_l[31:27]), .rd_data_o(sine_val));
     
     logic [31:0] phase_l = 32'h0;
     logic [31:0] frequency_step;
     logic [23:0] sine_val;
     logic valid_o_l;
     logic tx_valid_data;
     
     assign frequency_step = 32'h8000000;
     
     always @(posedge clk_i) begin
         valid_o_l <= 1'b0;
         if(1'b1) begin
             phase_l <= phase_l + frequency_step;
             valid_o_l <= 1'b1;
         end
     end
     assign sine_o = sine_val;
     assign valid_o = valid_o_l;
endmodule
