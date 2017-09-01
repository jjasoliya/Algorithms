#include "./../includes/stdafx.h"
#include "./../includes/cir_queue.h"


void cir_queue::push(int data)
{
	if ((rear == MAX_SIZE - 1 && front == 0) || rear + 1 == front)
		cout << "Queue is full" << endl;
	else
	{
		
		if (rear == MAX_SIZE-1)
			rear = 0;
		else
		{
			rear++;
			cir_queue_arr[rear] = data;
		}


		

		if (front == -1)
			front = 0;
	}
}

int cir_queue::pop()
{
	int item = 0;
	if (front == -1)
	{
		cout << "Queue is empty" << endl;
		return NULL;
	}
	else
	{
		item = cir_queue_arr[front];
	}

	
	if (front == rear)
	{
		front = -1;
		rear = -1;
	}
	else
	{
		if (front == MAX_SIZE -1 )
		{
			front = 0;
		}
		else
		{
			front++;
		}
		
	}


	return item;
}

cir_queue::cir_queue()
{
	front = -1;
	rear = -1;
}


cir_queue::~cir_queue()
{
}
