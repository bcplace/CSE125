module statemachine
//#(parameter = width_p) // can delete and just hardcode
(input [0:0] startbutton_i
.input [0:0] clk_i
,input [0:0] reset_i
,input [0:0] correct_i
//,output [width_p-1:0]    // some sort of addr or somethin
,output [3:0] score);

typedef enum logic [2:0]{
		init = 3'b000,
		game = 3'b001,
		userinput = 3'b010,
		decide = 3'b011,
		done = 3'b100
		} state;
		
	state cstate_l,nstate_l; 
	
	wire [3:0] score_l, iterations_l;
	
	assign score = score_l;
	
	initial begin
		iterations_l = 4'b0000;
		score_l = 4'b0000;
	end
	
	wire [2:0] random_number;
	
	lfsr
	#(3)
	lfsr_inst
	(.clk_i(clk_i)
	,.reset_i(reset_i)
	,.data_o(random_number)
	);
	
	logic [7:0] notes [7:0];
	logic [7:0] random_note;
	
	initial $readmemh("notes.hex", notes);
	
	assign random_note = notes[random_number];
	
	wire [7:0] fifo_o;
	
	fifo_1r1w
	#(7,16)
	fifo_usr_input
	(.clk_i(clk_i)
     ,.reset_i(reset_i)
     ,.data_i(random_note)
     ,.valid_i()
     ,.ready_o()
     ,.valid_o()
     ,.data_o(fifo_o)
     ,.yumi_i()
	);
	
	
	always_comb begin
		nstate_l = cstate_l;
		case (cstate_l)
			init: begin
			// reset score at beginning of game
				score_l = 4'b0000;
			// if start button pressed : start game
				if (startbutton) begin
					nstate_l = game;
				end
			end
			
			// use lfsr output to select 'random' sound from possible choices 
			// load that corresponding keyboard input or raw sound into FIFO (get Blaise help on ready/valid)
			// play that sound (discuss with Blaise)
			// loop for number of iterations (after each correct response) 
			game: begin
				
			end
			
			// wait for user input 
			userinput: begin
			// assume user data will come from outside of statemachine so is this needed?
			end
			
			//pop/deq from FIFO for correctness check
			// if equal correct stays high, if not it goes low
			// if correct
			//	add a point, continue game, and inc # of sound playing iterations
			// if incorrect
			//	end game and go to done state
			decide: begin
			
			
				if (correct_i) begin
					score_l = score_l + 1;
					nstate_l = game;
				end else begin
					nstate_l = done;
				end
			end
			
			// display score and wait for reset
			done: begin
				
			end
			
			default: ;
		endcase
	end
   
	
	// state machine reset ff
	always_ff @(posedge clk_i) begin
		if (reset_i) begin
			cstate_l <= init;
		end else begin
			cstate_l <= nstate_l;
		end
	end
	

   
   	
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
   
   
   
   
   
   
   
     
       
endmodule

