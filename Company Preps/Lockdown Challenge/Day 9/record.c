#include <stdio.h>
struct record
{
    int roll;
    char name[25];
};
int main()
{
    int n, i;
    scanf("%d", &n);
    struct record student[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &student[i].roll);
        scanf("%s", student[i].name);
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", student[i].roll);
        printf("%s\n", student[i].name);
    }
}