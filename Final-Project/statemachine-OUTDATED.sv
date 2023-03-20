module statemachine
//#(parameter = width_p) // can delete and just hardcode
(input [0:0] startbutton_i
,input [0:0] clk_i
,input [0:0] reset_i
,input [7:0] userinput_i
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
	
	logic [3:0] nscore_l, cscore_l;//, iterations_l;
	
	assign score = cscore_l;
	
	logic [7:0] noteorder [15:0];
	logic [3:0] n_counter;
	
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
	
	//wire [7:0] fifo_o;
	//wire [0:0] valid_i_w, valid_o_w, ready_o_w, yumi_i_w;
	
	/*
	fifo_1r1w
	#(7,16)
	fifo_usr_input
	(.clk_i(clk_i)
     ,.reset_i(reset_i)
     ,.data_i(random_note)
     ,.valid_i(valid_i_w)
     ,.ready_o(ready_o_w)
     ,.valid_o(valid_o_w)
     ,.data_o(fifo_o)
     ,.yumi_i(yumi_i_w)
	);
	*/
	
	always_comb begin
		case (cstate_l) 
			init: begin
			// reset score at beginning of game
				nscore_l = 4'b0000;
				n_counter = 4'b0000;
			// if start button pressed : start game
				if (startbutton_i) begin
					nstate_l = game;
				end
			end
			
			// use lfsr output to select 'random' sound from possible choices (handeled above)
			// load that corresponding keyboard input or raw sound into FIFO (get Blaise help on ready/valid)
			// play that sound (discuss with Blaise)
			// loop for number of iterations (after each correct response) 
			game: begin
				//for (genvar i = 0; i < iterations; i++) begin
					
				//end
			end
			
			//pop/deq from FIFO for correctness check
			// if equal correct stays high, if not it goes low
			// if correct
			//	add a point, continue game, and inc # of sound playing iterations
			// if incorrect
			//	end game and go to done state
			decide: begin
				if (~(noteorder[n_counter] == userinput_i)) begin
					nstate_l = done;
				end else begin
					nscore_l = cscore_l + 4'b0001;
					//iterations_l = iterations_l + 1'b1;
					nstate_l = game;
				end
			end
			
			// display score and wait for reset
			done: begin
				
			end
			
			default: ;
		endcase
		nscore_l = cscore_l;
		nstate_l = cstate_l;
		//score_l = score_l;
	end
   
	
	// state machine reset ff
	always_ff @(posedge clk_i) begin
		if (reset_i) begin
			cstate_l <= init;
		end else begin
			cstate_l <= nstate_l;
			cscore_l <= nscore_l;
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

