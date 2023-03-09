//Testbench for top level
`timescale 1ns/1ps
module testbench();
/* verilator lint_off PINMISSING */
logic clk_i;
logic reset_i;


nonsynth_clock_gen
     #(.cycle_time_p(10))
   cg
     (.clk_o(clk_i));

nonsynth_reset_gen
     #(.num_clocks_p(1)
       ,.reset_cycles_lo_p(1)
       ,.reset_cycles_hi_p(10))
   rg
     (.clk_i(clk_i)
      ,.async_reset_o(reset_i));
      
top
#()
dut
(.clk_12mhz_i(clk_i), .reset_n_async_unsafe_i(reset_i));


initial begin 
`ifdef VERILATOR
      $dumpfile("verilator.fst");
`else
      $dumpfile("iverilog.vcd");
`endif
      $dumpvars;
      
#1000
$finish();
end
endmodule
