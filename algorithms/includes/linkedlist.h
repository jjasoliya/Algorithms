#pragma once
class linkedlist
{

private:
	struct node
	{
		int data;
		node *link;
	} *p;

public:
	linkedlist();  // constructor
	~linkedlist(); // destructor
	void append_node(int num); // appends a node in linked list 
	void del(int num);    // finds and deletes matching node from linkedlist
	void addatbeg(int num);  // adds at the beginning of the linked list
	void addafter(int c, int num);  // adds node after specified number of nodes 
	void count();
	void display(); // displays linked list


};

