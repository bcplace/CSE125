//Testbench for top level
`timescale 1ns/1ps
module testbench();
/* verilator lint_off PINMISSING */
logic clk_i;
logic reset_i;
logic startbutton;

nonsynth_clock_gen
     #(.cycle_time_p(44))
   cg
     (.clk_o(clk_i));
nonsynth_reset_gen
     #(.num_clocks_p(1)
       ,.reset_cycles_lo_p(2)
       ,.reset_cycles_hi_p(2))
   rg
     (.clk_i(clk_i)
      ,.async_reset_o(reset_i));
      
top
#()
dut
(.clk_12mhz_i(clk_i), .reset_n_async_unsafe_i(reset_i), .button_async_unsafe_i({1'b0,1'b0, startbutton}));


initial begin 
`ifdef VERILATOR
      $dumpfile("verilator.fst");
`else
      $dumpfile("iverilog.vcd");
`endif
      $dumpvars;
//reset_i = 1'b0;
startbutton = 1'b0;
#200
//reset_i = 1'b1;
//keypad_row = 4'hF;
#300
startbutton = 1'b1;
#100;
startbutton = 1'b0;
//keypad_row = 4'hE;
#300
//keypad_row = 4'hD;
#300
//keypad_row = 4'hB;
#300
//keypad_row = 4'h8;
#65000
$finish();
end

final begin
$display("END OF TESTBENCH --------------------------");
end

endmodule
