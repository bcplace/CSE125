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
	logic [24:0] playcounterout, pausecounterout;
	/* verilator lint_on UNUSEDSIGNAL */
	assign second = (playcounterout[24] || pausecounterout[24]);
	
	logic [0:0] playcounterup, pausecounterup, playcounter_reset, pausecounter_reset;
	
	counter
	#(25)
	playcounter_inst
	(.clk_i(clk_i)
	,.reset_i(reset_i | playcounter_reset)
	,.up_i(playcounterup)
	,.down_i(1'b0)
	,.counter_o(playcounterout)
	);
	
	counter
	#(25)
	pausecounter_inst
	(.clk_i(clk_i)
	,.reset_i(reset_i | pausecounter_reset)
	,.up_i(pausecounterup)
	,.down_i(1'b0)
	,.counter_o(pausecounterout)
	);
	
	/* verilator lint_off LATCH */
	
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
				if (playcounterout[24]) begin
					nstate_l = pause;
				end
			end
			
			pause: begin
				if (endofnotes) begin
					nstate_l = done;
				end
				
				nfstep_l = 32'h00000000;
				// use 24 instead of 5 in counterout
				if (pausecounterout[24]) begin
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
			playcounter_reset <= 1'b0;
			pausecounter_reset <= 1'b0;
			playcounterup <= 1'b0;
			pausecounterup <= 1'b0;
			cfstep_l <= 32'h00000000;
		end else begin
			playcounter_reset <= 1'b0;
			pausecounter_reset <= 1'b0;
			cstate_l <= nstate_l;
			cfstep_l <= nfstep_l;
		end
		// 
		if (cstate_l == init) begin
			playcounterup <= 1'b0;
			pausecounterup <= 1'b0;
			ncounter <= 5'b00000;
			playcounter_reset <= 1'b0;
			pausecounter_reset <= 1'b0;
				// use 24 instead of 5 in counterout
		end else if ( startbutton_i ) begin 
			playcounterup <= 1'b1;
				// use 24 instead of 5 in counterout
		end else if ( (cstate_l == playnote) && (playcounterout[24]) ) begin
			ncounter <= ncounter + 1;
			playcounter_reset <= 1'b1;
			playcounterup <= 1'b0;
			pausecounterup <= 1'b1;
				// use 24 instead of 5 in counterout
		end else if ( (cstate_l == pause) && (pausecounterout[24]) ) begin
			pausecounter_reset <= 1'b1;
			pausecounterup <= 1'b0;
			playcounterup <= 1'b1;
		end
	end
       
       
endmodule

