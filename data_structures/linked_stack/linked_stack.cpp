#include "stdafx.h"
#include "linked_stack.h"

using namespace std;

linked_stack::linked_stack()
{
	top = NULL;
}

linked_stack::~linked_stack()
{
}

void linked_stack::push(int item)
{
	node *temp;
	temp = new node;

	if (temp == NULL)
		cout << "The Stack is full " << endl;

	temp->data = item;
	temp->link = top;
	top = temp;

}

int linked_stack::pop()
{

	if (top == NULL)	
	{
		cout << "The Stack is Empty" << endl;
		return NULL;
	}
	
	int data;
	node * temp;
	temp = top;

	data = temp->data;
	top = temp->link;
	delete temp;
	return data;
}
