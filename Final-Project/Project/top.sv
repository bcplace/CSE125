//Top Level for Project
module top
  (input [0:0] clk_12mhz_i
  // n: Negative Polarity (0 when pressed, 1 otherwise)
  // async: Not synchronized to clock
  // unsafe: Not De-Bounced
  ,input [0:0] reset_n_async_unsafe_i
  // async: Not synchronized to clock
  // unsafe: Not De-Bounced
  ,input [3:1] button_async_unsafe_i
  
  //KeyPad Stuff
  ,input [3:0] kpyd_row_i
  
  ,output [3:0] kpyd_col_o

  // Line Out (Green)
  // Main clock (for synchronization)
  ,output tx_main_clk_o
  // Selects between L/R channels, but called a "clock"
  ,output tx_lr_clk_o
  // Data clock
  ,output tx_data_clk_o
  // Output Data
  ,output tx_data_o

  // Line In (Blue)
  // Main clock (for synchronization)
  ,output rx_main_clk_o
  // Selects between L/R channels, but called a "clock"
  ,output rx_lr_clk_o
  // Data clock
  ,output rx_data_clk_o
  // Input data
  ,input  rx_data_i

  ,output [5:1] led_o);

   // These two D Flip Flops form what is known as a Synchronizer. We
   // will learn about these in Week 5, but you can see more here:
   // https://inst.eecs.berkeley.edu/~cs150/sp12/agenda/lec/lec16-synch.pdf
   wire reset_n_sync_r;
   wire reset_sync_r;
   wire reset_r; // Use this as your reset_signal

   dff
     #()
   sync_a
     (.clk_i(clk_o)
     ,.reset_i(1'b0)
     ,.d_i(reset_n_async_unsafe_i)
     ,.q_o(reset_n_sync_r));

   inv
     #()
   inv
     (.a_i(reset_n_sync_r)
     ,.b_o(reset_sync_r));

   dff
     #()
   sync_b
     (.clk_i(clk_o)
     ,.reset_i(1'b0)
     ,.d_i(reset_sync_r)
     ,.q_o(reset_r));
       
   wire [23:0] axis_tx_data;
   wire        axis_tx_valid;
   wire        axis_tx_ready;
   wire       axis_tx_last;
   
   wire [23:0] axis_rx_data;
   wire        axis_rx_valid;
   wire        axis_rx_ready;
   wire        axis_rx_last;
   wire        clk_o;
   logic axis_clk;

  // This is a PLL! You'll learn about these later...
  SB_PLL40_PAD 
    #(.FEEDBACK_PATH("SIMPLE")
     ,.PLLOUT_SELECT("GENCLK")
     ,.DIVR(4'b0000)
     ,.DIVF(7'b1000011)
     ,.DIVQ(3'b101)
     ,.FILTER_RANGE(3'b001)
     )
   pll_inst
     (.PACKAGEPIN(clk_12mhz_i)
     ,.PLLOUTCORE(clk_o)
     ,.RESETB(1'b1)
     ,.BYPASS(1'b0)
     );
     /*nonsynth_clock_gen
     #(.cycle_time_p(44))
   cg
     (.clk_o(clk_o));*/
  /* verilator lint_off WIDTH */
   assign axis_clk = clk_o;
   axis_i2s2 
     #()
   i2s2_inst
     (.axis_clk(axis_clk)
     ,.axis_resetn(~reset_r)
      
     ,.tx_axis_c_data(axis_tx_data)
     ,.tx_axis_c_valid(axis_tx_valid)
     ,.tx_axis_c_ready(axis_tx_ready)
     ,.tx_axis_c_last(axis_tx_last)
     
     ,.rx_axis_p_data(axis_rx_data)
     ,.rx_axis_p_valid(axis_rx_valid)
     ,.rx_axis_p_ready(axis_rx_ready)
     ,.rx_axis_p_last(axis_rx_last) 
     
     ,.tx_mclk(tx_main_clk_o)
     ,.tx_lrck(tx_lr_clk_o)
     ,.tx_sclk(tx_data_clk_o)
     ,.tx_sdout(tx_data_o)
     ,.rx_mclk(rx_main_clk_o)
     ,.rx_lrck(rx_lr_clk_o)
     ,.rx_sclk(rx_data_clk_o)
     ,.rx_sdin(rx_data_i)
     );


     logic [3:0] kpyd2ssd_row_w;
     logic [3:0] shift_o;
     logic [3:0] kpyd2ssd_col_w;
     
     logic [23:0] lowB;
     logic [23:0] D;
     logic [23:0] highE;
     logic [23:0] E;
     
     logic [31:0] frequency_step;
     
     
     logic [3:0] row_sync;
     logic [3:0] col_sync;
  
     shift
     #(.depth_p(4), .reset_val_p(4'b1110))
     shifter
     (.clk_i(axis_clk)
     , .reset_i(reset_r)
     , .data_i(shift_o[3])
     , .data_o(shift_o));

     always_comb begin
      kpyd2ssd_col_w = shift_o;
      case(kpyd_row_i)
          4'b0111 : kpyd2ssd_row_w = 4'b1000;
          4'b1011 : kpyd2ssd_row_w = 4'b0100;
          4'b1101 : kpyd2ssd_row_w = 4'b0010;
          4'b1110 : kpyd2ssd_row_w = 4'b0001;
          default : kpyd2ssd_row_w = 4'b0000;
      endcase
     
     end
     assign kpyd_col_o = kpyd2ssd_col_w;
  
     always @(posedge axis_clk) begin
       row_sync <= kpyd2ssd_row_w;
       col_sync <= ~kpyd2ssd_col_w;
       case({row_sync, col_sync})
         8'b01000001 : begin 
                       frequency_step <= 32'h0D8050F;
                       end
         8'b00100001 : begin 
                       frequency_step <= 32'h100E6B0;
                       end
         8'b00010001 : begin
                       frequency_step <= 32'h1205BC0;
                       end
         8'b10000001 : begin
                       frequency_step <= 32'h0C073F9;
                       end
         8'b10000010 : begin
                       frequency_step <= 32'h156EC76;
                       end
         default : begin 
                       frequency_step <= 32'd0;
                   end
        endcase
     end

     
     sine
     //#(.frequency_step(32'h0AD512)) //Freq_step = ((2^32) * (frequency/99.5KHz))
     LowB
     (.clk_i(axis_clk),
     .axis_last(axis_tx_last),
     .frequency_step(frequency_step),
     .reset_i(reset_r),
     .ready_i(axis_tx_ready),
     .valid_o(axis_tx_valid),
     .sine_o(axis_tx_data));
     
     /*sine
     #(.frequency_step(32'h0CE1B9)) //Freq_step = ((2^32) * (frequency/99.5KHz))
     Dnote
     (.clk_i(axis_clk),
     .axis_last(axis_tx_last),
     .reset_i(reset_r),
     .ready_i(axis_tx_ready),
     .valid_o(axis_tx_valid),
     .sine_o(D));
     
     sine
     #(.frequency_step(32'h01CEB50)) //Freq_step = ((2^32) * (frequency/99.5KHz))
     eHigh
     (.clk_i(axis_clk),
     .axis_last(axis_tx_last),
     .reset_i(reset_r),
     .ready_i(axis_tx_ready),
     .valid_o(axis_tx_valid),
     .sine_o(highE));
     
     sine
     #(.frequency_step(32'h0E758B)) //Freq_step = ((2^32) * (frequency/99.5KHz))
     Enote
     (.clk_i(axis_clk),
     .axis_last(axis_tx_last),
     .reset_i(reset_r),
     .ready_i(axis_tx_ready),
     .valid_o(axis_tx_valid),
     .sine_o(E));*/
     
    
     
             

endmodule
