#include <stdio.h>
void swap(int *, int *);
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    i = -1;
    int j = 0;
    while (j < n)
    {
        if (arr[j] % 2 == 0)
        {
            i++;
            swap(&arr[j], &arr[i]);
        }
        j++;
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
void swap(int *px, int *py) /* interchange *px and *py */
{
    int temp;
    temp = *px;
    *px = *py;
    *py = temp;
}

/*
OP:
Input: 5
Array: 1 2 3 4 5
Output: 2 4 1 3 5
*/