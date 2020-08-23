//Structure Basics
#include <stdio.h>
struct student
{
    char name[50];
    int edition;
    float price;
    char author[50];
} s[5];

int main()
{
    int i;

    printf("Enter information of Books:\n");

    for (i = 0; i < 6; ++i)
    {
        s[i].edition = i + 1;

        printf("Enter name: ");
        scanf("%s", s[i].name);
        printf("Enter author name: ");
        scanf("%s", s[i].author);
        printf("Enter Edition:");
        scanf("%d", &s[i].edition);
        printf("Enter price: ");
        scanf("%f", &s[i].price);

        printf("\n");
    }

    printf("Displaying Information:\n\n");

    for (i = 0; i < 6; ++i)
    {
        printf("\nEdition number: %d\n", s[i].edition);
        printf("Name: ");
        puts(s[i].name);
        printf("Author Name: ");
        puts(s[i].author);
        printf("price: %.1f", s[i].price);
        printf("\n");
    }
    return 0;
}
