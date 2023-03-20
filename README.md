# Final Project for CSE125/Logic Design with SystemVerilog
The goal of this project is to design and implement an FPGA based song generator.
Instructions to use:
To play the piano mode, clone the repo into your local directory. Then, use "git checkout Piano" to checkout the piano code. Make sure your icebreaker 1.0b FPGA is connected via micro-USB and that the I2S2 PMOD module is connected to PMOD 1A and the PMOD keypad is connected to PMOD 1B. Then, navigate to CSE125/Final-Project/Project and in terminal execute the command "make prog". This will write the bitstream to your FPGA at which point you can connect a 3.5mm jack to the PMOD module and beginning playing sounds. The notes are mapped to the columns A-D and 2-F on the keypad for a total of 8 notes. 
 
To use the automated song generator:
With the I2S2 Module connected to the PMOD 1A, use "git checkout main". Then navigate to CSE125/Final-Project/Game_dev and use the command "make prog" to write the bitstream. You will be able to hear the song being played after pressing btn1 on the FPGA. If you would like to change the song go into top.sv and change the parameter in the statemachine to a different song hex file(not the most user friendly sorry). And you're done!
