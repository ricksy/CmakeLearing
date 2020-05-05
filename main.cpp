#include <iostream>
#include <stdlib.h>
int main(int argc, char** argv)
{
	std::cout<<"Hello World!\n";
	if(argc>1)
	{
		return std::atoi(argv[1]);
	}
	return 0;
	
}
