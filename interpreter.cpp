#include "interpreter.h"

void Interpreter::execFrame(int frame_index,size_t instr_count,bool test)
{
	
	// Copy Frame object

	Frame frame = frameStack[frame_index];
	
	uint8_t *byte_stream = frame.byte_stream;
	cout<<"instr count = "<<instr_count<<endl
		<<"Code:\n";
	for(size_t i=0;i<instr_count;i++)
	{	
			cout<<"   "<<i<<": ";
		
		switch(unsigned(byte_stream[i]))
		{

			case 4: //iconst_1
			{
				cout<<"iconst_1\n";
				frame.op_stack.push_back(1);
				break;
			}
			case 5: //iconst_2
			{
				cout<<"iconst_2\n";
				frame.op_stack.push_back(2);
				break;
			}
			/***
			case 16: ///bipush
			{
				frame.op_stack.push_back(byte_stream[i + 1]);
				i++;
				break;
			}
			***/
			case 27: //iload_1
			{	
				cout<<"iload_1\n";
				frame.op_stack.push_back(frame.var_field[1]);
				break;
			}
			case 28: //iload_2
			{	
				cout<<"iload_2\n";
				frame.op_stack.push_back(frame.var_field[2]);
				break;
			}
			case 60: //istore_1
			{	
				cout<<"istore_1\n";
				frame.var_field[1] = frame.op_stack[frame.op_stack.size()-1];
				frame.op_stack.pop_back();
				break;
			}
			case 61: //istore_2
			{	
				cout<<"istore_2\n";
				frame.var_field[2] = frame.op_stack[frame.op_stack.size()-1];
				frame.op_stack.pop_back();
				break;
			}
			case 96: //iadd
			{	
				cout<<"iadd\n";
				frame.op_stack[frame.op_stack.size()-2] += frame.op_stack[frame.op_stack.size()-1];
				frame.op_stack.pop_back();
				break;
			}
			default:
			{
				cout<<"VM Error: Byte_Stream Instruction \""
					<<unsigned(byte_stream[i])
					<<"\" is Undetermined\n";
				break;
			}
		}
			if(test == true)
				frame.displayStack();

	}
	
}

