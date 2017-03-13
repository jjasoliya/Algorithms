#include "stdafx.h"
#include "queue.h"
#define MAX_SIZE 5

//constructor
queue::queue()
{
	queue_ptr_front = -1;
	queue_ptr_rear = -1;
}


//destructor
queue::~queue()
{
}


void queue::push(int data)
{
	if (queue_ptr_rear == MAX_SIZE)
	{
		cout << "Queue is full" << endl;
		return;
	}

	else
	{
		queue_ptr_rear++;
		queue_arr[queue_ptr_rear] = data;

		if (queue_ptr_front == -1)
			queue_ptr_front = 0;
	}

};


int queue::pop()
{
	int item = 0;
	if (queue_ptr_front == -1)
		cout << "Queue is empty" << endl;
	else
	{
		int item = queue_arr[queue_ptr_front];
		

		if (queue_ptr_front == queue_ptr_rear)
		{
			queue_ptr_front = -1;
			queue_ptr_rear = -1;
		}
		else
		{
			queue_ptr_front++;
		}
	}

	return item;
};