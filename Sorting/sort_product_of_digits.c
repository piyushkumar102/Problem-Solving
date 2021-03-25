#include <stdio.h>
int main()
{
    int n, sum = 0;
    scanf("%d", &n);
    int number[n], product[n];
    int i, prod = 1;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &number[i]);
        int num = number[i];
        while (num > 0)
        {
            int mod = num % 10;
            prod = (prod * mod);
            sum = sum + prod;
            num = num / 10;
        }
        product[i] = prod;
        prod = 1;
    }
    int j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (product[j] >= product[j + 1])
            {
                temp = number[j];
                number[j] = number[j + 1];
                number[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", number[i]);
    }
}