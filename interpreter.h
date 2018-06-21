#include "frame.h"

class Interpreter
{
	public:
		Interpreter(){}
		~Interpreter(){}
		vector<Frame>frameStack;
		void execFrame(int i,size_t instr_count,bool test);
	///Very likely to be turned into a Struct 
};
