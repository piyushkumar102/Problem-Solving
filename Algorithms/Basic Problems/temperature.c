//Fah to Celsius convertor
#include <stdio.h> //Header Files
#define UP 300	   //Macros
#define LOW 0
#define INC 20
void whileloop() //no return type
{
	printf("While Loop:\n");
	float f = 0, c = 0, u = 300, s = 20; //Variables
	while (f <= u)
	{
		c = 5 * (f - 32) / 9;
		printf("F:%.0f\tC:%6.1f\n", f, c);
		f = f + s;
	}
}
void forloop() //no return type
{
	printf("\nFor Loop:\n");
	int f, c;
	printf("\n");
	for (f = UP; f >= LOW; f = f - INC)
	{
		c = 5 * (f - 32) / 9;
		printf("F:%d\tC:%d\n", f, c);
	}
}
int main()
{
	whileloop();
	forloop();
}
