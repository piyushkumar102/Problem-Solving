#include <stdio.h>
#include <stdlib.h>

void update(int *a, int *b)
{
    int *c, *d;
    *c = *a + *b;
    *d = *a - *b;
    printf("%d\n%d", *c, abs(*d));
}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;
    scanf("%d %d", &a, &b);
    update(pa, pb);
    return 0;
}