
#include "stdafx.h"
#include "linked_stack.h"

void main()
{
	linked_stack ls;

	// push values to the stack
	ls.push(10);
	ls.push(100);
	ls.push(1000);
	ls.push(10000);
	ls.push(100000);

	std::cout << ls.pop() << std::endl;
	std::cout << ls.pop() << std::endl;
	std::cout << ls.pop() << std::endl;
	std::cout << ls.pop() << std::endl;
	std::cout << ls.pop() << std::endl;
	// should be empty now
	std::cout << ls.pop() << std::endl;


	getchar();

}