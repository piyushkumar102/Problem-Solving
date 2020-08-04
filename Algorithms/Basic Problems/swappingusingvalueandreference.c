#include <stdio.h>
void swap(int *, int *);
void swap1(int, int);
int main(void)
{
    int x, y;
    scanf("%d%d", &x, &y);
    printf("%d %d", x, y);
    printf("\nAddress of x and y:%d,%d", &x, &y);
    swap(&x, &y);
    printf("\nAdress of swapped value:%d,%d", &x, &y);
    swap1(x, y);
    return 0;
}
void swap(int *px, int *py) /* interchange *px and *py */
{
    int temp;
    temp = *px;
    *px = *py;
    *py = temp;
    printf("\nSwapped Value:%d,%d", *px, *py);
}
void swap1(int a, int b) /* WRONG */
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("\nSwapped again:%d,%d", a, b);
    printf("\nAddress of Swapped values:%d,%d", &a, &b);
}