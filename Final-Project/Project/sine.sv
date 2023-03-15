//Sine wave generator
module sine
//#(parameter [31:0] frequency_step = 32'h8000000)
(input clk_i,
input reset_i,
input [31:0]frequency_step,
output axis_last,
input ready_i,
output valid_o,
output [23:0]sine_o
);

     /*ram_1r1w_sync //Outputs after 1 clock cycle
     #(.width_p(24), .depth_p(64), .filename_p("sine.hex"))
     LUT
     (.clk_i(clk_i), .reset_i(reset_i), .wr_valid_i(1'b0), .wr_data_i(24'd0),
     .wr_addr_i(6'd0), .rd_addr_i(phase_l[31:26]), .rd_data_o(sine_val));*/
     
     logic [31:0] phase_l = 32'd0;
     logic [23:0] sine_val;
     logic valid_o_l;
     logic axis_last_l;
     logic [1:0] pipeline;
     logic [5:0] index;
     logic [23:0] tblval;
     
     logic [23:0] quarterwave [0:63];
     
     initial $readmemh("sine.hex", quarterwave);
     always @(posedge clk_i) begin
         if(reset_i) begin
             valid_o_l <= 1'b0;
         end
	 if(ready_i & valid_o) begin // Producer Yumi-Valid Handshake
	   valid_o_l <= 1'b0;
	   
	   //Input Clock
	   phase_l <= phase_l + frequency_step;
	   
	   //clock 1
	   pipeline[0] <= phase_l[31];
	   if(phase_l[30])
	       index <= ~phase_l[29:24];
	   else
	       index <= phase_l[29:24];
	   
	   //Clock 2
	   pipeline[1] <= pipeline[0];
	   tblval <= quarterwave[index];
	   
	   //Output Clock
	   if(pipeline[1])
	       sine_val <= -tblval;
	   else
	       sine_val <= tblval;
	   
	   axis_last_l <= ~axis_last_l;
	 end else begin
	   valid_o_l <= 1'b1;
	 end
     end
     
     
     assign sine_o = sine_val;
     assign valid_o = valid_o_l;
     assign axis_last = axis_last_l;
     
     
endmodule
