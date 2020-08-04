//Stack Operations in Array
#include <stdio.h>
#include <stdlib.h>
#define size 5
struct stack
{
	int s[size];
	int top;
} st;
int main()
{
	int n, choice, op, i;
	st.top = -1;
	scanf("%d", &op);
	for (i = 0; i < op; i++)
	{
		if (full())
			printf("\nStack is Full");
		else
		{
			scanf("%d", &choice);
			switch (choice)
			{
			case 1:
				push(n);
				break;
			case 2:
				pop();
				break;
			}
		}
	}

	display();
}
int push(n)
{
	printf("Enter the number to be pushed:");
	scanf("%d", &n);
	st.top = st.top + 1;
	st.s[st.top] = n;
}
int pop()
{
	int n;
	n = st.s[st.top];
	st.top = st.top - 1;
	printf("\nPopped value:%d", n);
	printf("\nNew Stack");
	display();
}
int full()
{
	if (st.top >= size - 1)
		return 1;
	else
		return 0;
}
int empty()
{
	if (st.top == -1)
		return 1;
	else
		return 0;
}
int display()
{
	int i;
	if (empty())
		printf("\nEmpty");
	else
	{
		for (i = st.top; i >= 0; i--)
			printf("\n%d", st.s[i]);
	}
}
