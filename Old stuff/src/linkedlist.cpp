#include "./../includes/stdafx.h"
#include "./../includes/linkedlist.h"


linkedlist::linkedlist()
{
	p = NULL;
}

void linkedlist::append_node(int num)
{
	node *q,*t;

	if (p == NULL)
	{
		p = new node;
		p->data = num;
		p->link = NULL;
	}
	else
	{
		q = p;
		while (q->link != NULL)
		{
			q = q->link;
		}
			

		t = new node;
		t->data = num;
		t->link = NULL;
		q->link = t;

	}

}

void linkedlist::del(int num)
{
	node *q, *r;

	q = p;
	// if the node to be deleted is first node
	if (q->data == num)
	{
		p = q->link;
		delete q;
		return;
	}

    // traverse through the list and find the nodes to be deleted
	r = q;
	while (q->link != NULL)
	{
		if (q->data == num)
		{
			r->link = q->link;
			// free memory occupied by the node
			delete q;
			return;
		}

		r = q;
		q = q->link;
	}
	cout << endl << "Element " << num << "not found ";

}

void linkedlist::addatbeg(int num)
{
 // adds node beggining of the linked list
	node *q;
	q = new node;
	q->data = num;
	q->link = p;
	p = q;

}

void linkedlist::addafter(int c, int num)
{
	node *q,*t;
	q = p;

	for (int i = 0; i < c; i++)
	{
		q = q->link;
		// if end of linked list found
		if (q == NULL)
		{
			cout << endl << " there  are less than  " << c << " elements in linked list  ";
			return;
		}
	}

		//insert new node
		t = new node;
		t->data = num;
		t->link = q->link;
		q->link = t;
 
}

void linkedlist::count()
{
	node *q;
	q = p;
	int count = 0 ;
	while (q->link != NULL )
	{
		count++;
		q = q->link;
	}

	cout << "Total nodes in linked list ==  " << count+1 << endl;
}

void linkedlist::display()
{
	node *q;
	cout << "DISPLAY LINKEDLIST" << endl;

	for (q = p; q->link != NULL; q = q->link)
		cout << q->data << endl;

	cout << q->data << endl;

}


linkedlist::~linkedlist()
{
	// destroy the linked list objects
	node *q;
	if (p == NULL)
		return;

	while (p != NULL)
	{
		q = p->link;
		delete p;
		p = q;
	}
}

