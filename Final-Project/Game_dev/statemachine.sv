module statemachine
//#(parameter = width_p) // can delete and just hardcode
(input [0:0] clk_i
,input [0:0] reset_i
,input [0:0] startbutton_i
//,output [width_p-1:0]    // some sort of addr or somethin
,output [31:0] fstep_o
,output [0:0] second);

// reset counter on transition to state (inside always ff)
// use ff block to set counter, read only inside always comb


// 25 bit counter to count for 1 sec

	typedef enum logic [1:0]{
		init = 2'b00,
		playnote = 2'b01,
		pause = 2'b10,
		done = 2'b11
		} state;
	state cstate_l = init;
	state nstate_l = init; 
	
	// song: A C A A | D A G A | E A A F | E C A E | A A G G | E B AAAAA 
	
	logic [4:0] ncounter;
	logic [31:0] notes_to_play [0:22]; // number of notes may change
		 
	initial $readmemh("notes.hex", notes_to_play);
	
	logic [0:0] endofnotes; //assign to last index
	assign endofnotes = (ncounter == 5'd22);
	
	logic [31:0] cfstep_l, nfstep_l;
	
	assign fstep_o = cfstep_l;
	/* verilator lint_off UNUSEDSIGNAL */
	logic [24:0] counterout;
	/* verilator lint_on UNUSEDSIGNAL */
	assign second = counterout[24];
	
	logic [0:0] counter_reset;
	
	counter
	#(25)
	counter_inst
	(.clk_i(clk_i)
	,.reset_i(reset_i | counter_reset)
	,.up_i(1'b1)
	,.down_i(1'b0)
	,.counter_o(counterout)
	);
	
	/* verilator lint_off LATCH */
	logic [0:0] test;
	
	always @(posedge clk_i) begin
		nstate_l = cstate_l;
		nfstep_l = cfstep_l;
		case (cstate_l) 
			init: begin
			// if start button pressed : start song
				if (startbutton_i) begin
					nstate_l = playnote;
				end
			end
			
			playnote: begin
				if (endofnotes) begin
					nstate_l = done;
				end
				
				nfstep_l = notes_to_play[ncounter];
				// use 24 instead of 5 in counterout
				if (counterout[5]) begin
					nstate_l = pause;
				end
			end
			
			pause: begin
				if (endofnotes) begin
					nstate_l = done;
				end
				
				nfstep_l = 32'h00000000;
				// use 24 instead of 5 in counterout
				if (counterout[5]) begin
					nstate_l = playnote;
				end
			end
			
			done: begin
				// wait for reset
			end
			
			default: ;
		endcase
	end
   
	
	// state machine reset ff
	always_ff @(posedge clk_i) begin
		if (reset_i) begin
			cstate_l <= init;
			counter_reset <= 1'b0;
			cfstep_l <= 32'h00000000;
		end else begin
			counter_reset <= 1'b0;
			cstate_l <= nstate_l;
			cfstep_l <= nfstep_l;
		end
		// 
		if (cstate_l == init) begin
			ncounter <= 5'b00000;
			counter_reset <= 1'b0;
				// use 24 instead of 5 in counterout
		end else if ( (cstate_l == playnote) && (counterout[5]) ) begin
			ncounter <= ncounter + 1;
				// use 24 instead of 5 in counterout
		end else if ( ( (nstate_l == playnote) || (nstate_l == pause ) ) && (counterout[5]) ) begin
			counter_reset <= 1'b1;
		end
	end
       
       
endmodule


















/*
	always_ff @(posedge clk_i) begin
		if (cstate_l == idle) begin
			wr_e_l <= 1'b1;
		end else if (cstate_l == wr_and_rd) begin
			rd_e_l <= 1'b1;
			rd_up_l <= 1'b1;
		end
	end
	*/
   
   // 23 states + 1 init
/*
typedef enum logic [4:0]{
		init = 5'b00000,
		s1 = 5'b00001,
		s2 = 5'b00010,
		s3 = 5'b00011,
		s4 = 5'b00100,
		s5 = 5'b00101,
		s6 = 5'b00110,
		s7 = 5'b00111,
		s8 = 5'b01000,
		s9 = 5'b01001,
		s10 = 5'b01010,
		s11 = 5'b01011,
		s12 = 5'b01100,
		s13 = 5'b01101,
		s14 = 5'b01110,
		s15 = 5'b01111,
		s15 = 5'b10000,
		s16 = 5'b10001,
		s17 = 5'b10010,
		s18 = 5'b10011,
		s19 = 5'b10100,
		s20 = 5'b10101,
		s21 = 5'b10110,
		s22 = 5'b10111,
		s23 = 5'b11000,
		} state;
		*/
