#pragma once
#include "stdafx.h"
class linked_stack
{
private:
	struct node
	{
		int data;
		node *link;
	};

	node * top;
public:


	linked_stack();
	~linked_stack();
	void push(int item);
	int pop();
};

