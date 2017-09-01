
#include "./../includes/stdafx.h"
#include "./../includes/stack.h"

int main()
{
	int op;
	stack st(10);

	st.push(100);
	st.push(200);
	st.push(300);

	op = st.pop();
	cout << "pop" << op << '\n' << endl;
	op = st.pop();
	cout << "pop" << op << '\n' << endl;
	return 0;
}