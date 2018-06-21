#include <inttypes.h>
#include <stdio.h>
#include <iostream>
#include <vector>
#include <memory.h>

using namespace std;

struct Frame
{
		Frame(){}
		Frame(uint8_t input[],int n){byte_stream=input;var_ct=n;}
		Frame(const Frame& oldFrame)
		{
			byte_stream = oldFrame.byte_stream;
			op_stack    = oldFrame.op_stack;
			memcpy(var_field,oldFrame.var_field,sizeof(oldFrame.var_field));
		}
		Frame& operator=(const Frame& frame);
		~Frame(){}
		uint8_t *byte_stream;
		vector<int>op_stack;
		int var_ct;
		double var_field[4];
		void displayByte_Stream();
		void displayStack();
};

