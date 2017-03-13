#define MAX_SIZE 5
class queue
{

public:
	
	queue();
	int queue_ptr_front;
	int queue_ptr_rear;
	int queue_arr[MAX_SIZE];
	void push(int data);
	int pop();
	~queue();
};

