#include <stdlib.h>
#include <stdio.h>
int a[20], b[20], c[40];
int m, n, p, val, i, j, key, pos, temp;
void create();
void display();
void insert();
void del();
void search();

int main()
{
        int choice;
        printf("1.Create\n2.Display\n3.Insert\n4.Delete\n5.Search\n");
        while (1)
        {
                printf("Enter your choice:");
                scanf("%d", &choice);
                switch (choice)
                {
                case 1:
                        create();
                        break;
                case 2:
                        display();
                        break;
                case 3:
                        insert();
                        break;
                case 4:
                        del();
                        break;
                case 5:
                        search();
                        break;
                default:
                        printf("\nInvalid choice:\n");
                        break;
                }
        }
        return 0;
}

void display()
{
        int i;
        printf("\nThe array elements are:\n");
        for (i = 0; i < n; i++)
        {
                printf("%d\t", a[i]);
        }
        printf("\n");
}
void insert()
{
        create();
        printf("\nEnter the position for the new element:\t");
        scanf("%d", &pos);
        printf("\nEnter the element to be inserted :\t");
        scanf("%d", &val);
        for (i = n - 1; i >= pos; i--)
        {
                a[i + 1] = a[i];
        }
        a[pos] = val;
        n = n + 1;
        display();
}
void search()
{
        create();
        printf("\nEnter the element to be searched:\t");
        scanf("%d", &key);
        for (i = 0; i < n; i++)
        {
                if (a[i] == key)
                {
                        printf("\nThe element is present at position %d", i);
                        break;
                }
        }
}
void create()
{
        printf("\nEnter the size of the array elements:\t");
        scanf("%d", &n);
        printf("\nEnter the elements for the array:\n");
        for (i = 0; i < n; i++)
        {
                scanf("%d", &a[i]);
        }
}
void del()
{
        create();
        printf("\nEnter the position of the element to be deleted:\t");
        scanf("%d", &pos);
        val = a[pos];
        for (i = pos; i < n - 1; i++)
        {
                a[i] = a[i + 1];
        }
        n = n - 1;
        printf("\nThe deleted element is =%d", val);
        display();
}
