//Implementing Queue through Array
#include <stdio.h>
#include <stdlib.h>
#define size 5
int q[size];
int f = -1;
int r = -1;
int data;

void enqueue(int val)
{
    if (isfull())
    {
        printf("Queue Overflow");
    }
    else if (f == -1)
    {
        f = 0;
    }
    r = r + 1;
    q[r] = val;
}
void dequeue()
{
    int item;
    if (isempty())
    {
        printf("Queue Underflow");
        return 1;
    }
    else
    {
        item = q[f];
        f = f + 1;
        printf("Dequeued Value %d", item);
    }
}
int isempty()
{
    if (f == -1)
        return 1;
    else
        return 0;
}
int isfull()
{
    if (r == size - 1)
        return 1;
    else
        return 0;
}
void peek()
{
    printf("%d", q[f]);
}

void display()
{
    int i;
    for (i = f; i <= r; i++)
    {
        printf("\n%d", q[i]);
    }
}

int main()
{
    int n, choice, value;
    printf("\n\t 1.Enqueue\n\t 2.Dequeue\n\t 3.Display\n\t 4.Exit");
    do
    {
        printf("\n Enter the Choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            scanf("%d", &value);
            enqueue(value);
            break;
        }
        case 2:
        {
            dequeue();
            break;
        }
        case 3:
        {
            display();
            break;
        }
        case 4:
        {
            printf("\n\t EXIT POINT ");
            break;
        }
        }
    } while (choice != 4);
    return 0;
}

