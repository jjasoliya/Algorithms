// algorithms.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#define MAX_SIZE 5
#include "stack.h"
#include "queue.h"
#include "cir_queue.h"

void main()
{

/*
	// stack implementation 
	stack st;

	st.push(100);
	st.push(200);
	st.push(300);
	st.push(400);
	st.push(500);
	st.push(600);
	st.push(700);
	st.push(800);
	st.push(900);

	cout << "stack_pointer:" << st.stack_pointer << " | stack_arr[" << st.stack_pointer << "]  " << st.pop() << endl;
	cout << "stack_pointer:" << st.stack_pointer << " | stack_arr[" << st.stack_pointer << "]  " << st.pop() << endl;
	cout << "stack_pointer:" << st.stack_pointer << " | stack_arr[" << st.stack_pointer << "]  " << st.pop() << endl;
	cout << "stack_pointer:" << st.stack_pointer << " | stack_arr[" << st.stack_pointer << "]  " << st.pop() << endl;
	cout << "stack_pointer:" << st.stack_pointer << " | stack_arr[" << st.stack_pointer << "]  " << st.pop() << endl;
	cout << "stack_pointer:" << st.stack_pointer << " | stack_arr[" << st.stack_pointer << "]  " << st.pop() << endl;
	cout << "stack_pointer:" << st.stack_pointer << " | stack_arr[" << st.stack_pointer << "]  " << st.pop() << endl;
	cout << "stack_pointer:" << st.stack_pointer << " | stack_arr[" << st.stack_pointer << "]  " << st.pop() << endl;
	cout << "stack_pointer:" << st.stack_pointer << " | stack_arr[" << st.stack_pointer << "]  " << st.pop() << endl;

	_getch();
	st.~stack();

   // queue implementation
	cout << " ***********   QUEUE IMPLEMENTATION ************************\n" << endl;

	queue q;
	q.push(10);
	q.push(20);
	q.push(30);
	q.push(40);
	q.push(50);

	cout << "queue_ptr_front:" << q.queue_ptr_front	 << "  queue_ptr_rear:" << q.queue_ptr_rear << " | queue_arr[" << q.queue_arr[q.queue_ptr_front] << "] " << "output:" << q.pop() << endl;
	cout << "queue_ptr_front:" << q.queue_ptr_front << "  queue_ptr_rear:" << q.queue_ptr_rear << " | queue_arr[" << q.queue_arr[q.queue_ptr_front] << "] " << "output:" << q.pop() << endl;
	cout << "queue_ptr_front:" << q.queue_ptr_front << "  queue_ptr_rear:" << q.queue_ptr_rear << " | queue_arr[" << q.queue_arr[q.queue_ptr_front] << "] " << "output:" << q.pop() << endl;
	cout << "queue_ptr_front:" << q.queue_ptr_front << "  queue_ptr_rear:" << q.queue_ptr_rear << " | queue_arr[" << q.queue_arr[q.queue_ptr_front] << "] " << "output:" << q.pop() << endl;
	cout << "queue_ptr_front:" << q.queue_ptr_front << "  queue_ptr_rear:" << q.queue_ptr_rear << " | queue_arr[" << q.queue_arr[q.queue_ptr_front] << "] " << "output:" << q.pop() << endl;


	cout << endl << "End of Program - press any key to exit out from the program";
	_getch();
	q.~queue();

	*/

// cicular queue implementation

	cir_queue cq;
	cq.push(10); cout << "front pointer:" << cq.front << "  rear pointer:" << cq.rear << endl;
	cq.push(20); cout << "front pointer:" << cq.front << "  rear pointer:" << cq.rear << endl;
	cq.push(30); cout << "front pointer:" << cq.front << "  rear pointer:" << cq.rear << endl;
	cq.push(40); cout << "front pointer:" << cq.front << "  rear pointer:" << cq.rear << endl;
	cq.push(50); cout << "front pointer:" << cq.front << "  rear pointer:" << cq.rear << endl;
	cq.push(100); cout << "front pointer:" << cq.front << "  rear pointer:" << cq.rear << endl;
	cout << cq.pop() << endl; cout << "front pointer:" << cq.front << "  rear pointer:" << cq.rear << endl;
	cout << cq.pop() << endl; cout << "front pointer:" << cq.front << "  rear pointer:" << cq.rear << endl;
	cout << cq.pop() << endl; cout << "front pointer:" << cq.front << "  rear pointer:" << cq.rear << endl;
	cout << cq.pop() << endl; cout << "front pointer:" << cq.front << "  rear pointer:" << cq.rear << endl;
	cout << cq.pop() << endl; cout << "front pointer:" << cq.front << "  rear pointer:" << cq.rear << endl;
	cout << cq.pop() << endl; cout << "front pointer:" << cq.front << "  rear pointer:" << cq.rear << endl;
	cout << cq.pop() << endl; cout << "front pointer:" << cq.front << "  rear pointer:" << cq.rear << endl;
	cout << cq.pop() << endl; cout << "front pointer:" << cq.front << "  rear pointer:" << cq.rear << endl;


	_getch();

}

