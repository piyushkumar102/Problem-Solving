//Structure Basic
#include <stdio.h>
int main()
{
    struct details
    {
        char name[20];
        int price;
        int code;
        int qty;
    };
    struct details item[7];
    int n, i;
    int sum = 0;
    printf("Enter number of items:");
    scanf("%d", &n);
    fflush(stdin);
    for (i = 0; i < n; i++)
    {
        printf("Item name: \n");
        scanf("%s", item[i].name);

        printf("Item code: \n");
        scanf("%d", &item[i].code);

        printf("Quantity: \n");
        scanf("%d", &item[i].qty);

        printf("price: \n");
        scanf("%d", &item[i].price);
    }
    printf("\n Total Price \n");
    for (i = 0; i < n; i++)
    {
        sum = sum + item[i].price;
    }
    printf("%d", sum);
    printf("\nS.N.;NAME ;CODE;  QUANTITY; PRICE  \n");

    for (i = 0; i < n; i++)
        printf("%d     %s        %-d          %-5d     %-5d\n", i + 1, item[i].name, item[i].code, item[i].qty,
               item[i].price);
}
