// File defines all the headers


class stack
{
public:
	stack()
	{
		stack_pointer = 0;
	};
	~stack()
	{
	};
	void push(int item);
	int pop();
	int stack_pointer;
	int stack_arr[MAX_SIZE];
	
private:


};

void stack::push(int item)
{
	if (stack_pointer == MAX_SIZE)
	{
		cout << "Stack is FULL\n" << endl;
		return;
	}

	stack_arr[stack_pointer] = item;
	stack_pointer++;
}

int stack::pop()
{
	if (stack_pointer <= 0)
	{
		cout << "Stack is EMPTY" << endl;
		return 0;
	}

	stack_pointer--;
	int data = stack_arr[stack_pointer];

	return data;
}