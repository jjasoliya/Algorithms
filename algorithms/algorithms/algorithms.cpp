// algorithms.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#define MAX_SIZE 5
#include "stack.h"


void main()
{
	int op;
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
}

