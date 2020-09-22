#include <stdio.h>
struct record
{
    int roll;
    char name[25];
    int chem, math, physics;
    float average;
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
        scanf("%d", &student[i].chem);
        scanf("%d", &student[i].math);
        scanf("%d", &student[i].physics);
        student[i].average = (student[i].math + student[i].chem + student[i].physics) / 3;
    }
    for (i = 0; i < n; i++)
    {
        printf("%.2f\n", student[i].average);
    }
}