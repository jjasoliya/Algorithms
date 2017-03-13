#define MAX_SIZE 5
class cir_queue
{
public:

	int cir_queue_arr[MAX_SIZE];
	int front;
	int rear;
	void push(int data);
	int pop();
	cir_queue();
	~cir_queue();
};

