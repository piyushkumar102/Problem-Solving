#include <stdio.h>
struct details
{
    int roll, age;
    char name[25], address[25];
};
void age17(struct details student[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (student[i].age == 17)
        {
            printf("%s", student[i].name); /* data */
        }
    }
    printf("\n");
}
void rolleven(struct details student[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (student[i].roll % 2 == 0)
        {
            printf("%s ", student[i].name); /* data */
        }
    }
    printf("\n");
}
void iddetails(struct details student[], int n, int id)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (student[i].roll == id)
        {
            printf("%d ", student[i].roll);
            printf("%s ", student[i].name);
            printf("%d ", student[i].age);
            printf("%s ", student[i].address);
        }
    }
    printf("\n");
}

int main()
{
    int n, i, id;
    scanf("%d", &n);
    struct details student[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &student[i].roll);
        scanf("%s", student[i].name);
        scanf("%d", &student[i].age);
        scanf("%s", student[i].address);
    }
    scanf("%d", &id);
    age17(student, n);
    rolleven(student, n);
    iddetails(student, n, id);
}