#include "frame.h"

void Frame::displayByte_Stream()
{	
	printf("Code:\n");
		for(size_t i=0;i<sizeof(byte_stream);i++)
			printf("   %d: %02u \n",i, byte_stream[i]);		
			
}

void Frame::displayStack()
{
	cout<<"Op Stack\n";
		for(unsigned int i=0;i<op_stack.size();i++)
			cout<<op_stack[i]<<endl;
		cout<<"_____________________________\n";
}


