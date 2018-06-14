#include "interpreter.h"

int main()
{
	Interpreter interpreter;
		int     frame_index = 0;
		bool test;
		uint8_t byte_stream[] = {04,60,27,05,96,61};
		size_t  instr_ct   = sizeof(byte_stream)/sizeof(byte_stream[0]);
		int	var_ct		  = 4;
		// Execution Section
		Frame frame(byte_stream,var_ct);
		//frame.displayByte_Stream();
		interpreter.frameStack.push_back(frame);
		interpreter.execFrame(frame_index,instr_ct,test=false);
		frame.displayStack();

		/*
         *  _Add_support_for:_______________
		 *     Larger numbers, bipush
		 *     Mapping more than 4 variables
		 *     char, double, float, etc
		 *     Functions with return type
		 *     Constant Pool
		 *     Frame Manager
		 *     ExecFrame Subroutine
		 *     Casting var x = int(double) 
		 *     Interpreter Object
		 */

return 0;	
}
