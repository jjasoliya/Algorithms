#pragma once
class linkedlist
{

private:
	struct linknode
	{
		int data;
		int *linkpointer;
	} *ln;

public:
	linkedlist();
	virtual ~linkedlist();
	void initialize()
	void addnode(int data);
};

