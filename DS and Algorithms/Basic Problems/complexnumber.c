//Complex Number
#include <stdio.h>
typedef struct
{
    int real;
    int img;
} complex;
complex sum(complex *p1, complex *p2);
void main()
{
    complex c1, c2, c3;
    printf("enter c1");
    scanf("%d%d", &c1.real, &c1.img);
    printf("enter c2");
    scanf("%d%d", &c2.real, &c2.img);
    c3 = sum(&c1, &c2);
    printf("sum:%d%d", c3.real, c3.img);
}
complex sum(complex *p1, complex *p2)
{
    complex temp;
    temp.real = (*p1).real + (*p2).real;
    temp.img = (*p1).img + (*p2).img;
    return temp;
}
