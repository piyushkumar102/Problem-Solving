//Student Mark details using Structures
#include <stdio.h>
struct student
{
    char name[20];
    int mark[5];
    int total;
    float avg;
    char grade;
};
int main()
{
    struct student s[5];
    int i, j, strength;
    for (i = 0; i < 5; i++)
    {
        printf("\nStudent[%d] details\n", i + 1);
        printf("Enter Name:\n");
        scanf("%s", s[i].name);
        printf("Enter marks\n");
        for (j = 0; j < 5; j++)
        {
            printf("Enter subject[%d] Mark:\n", j + 1);
            scanf("%d", &s[i].mark[j]);
        }
    }
    for (i = 0; i < 5; i++)
    {
        s[i].total = 0;
        for (j = 0; j < 5; j++)
            s[i].total = s[i].total + s[i].mark[j];
        s[i].avg = s[i].total / 5;
        if (s[i].avg > 90)
            s[i].grade = 'o';
        else if (s[i].avg > 80)
            s[i].grade = 'A';
        else if (s[i].avg > 70)
            s[i].grade = 'B';
        else if (s[i].avg > 60)
            s[i].grade = 'C';
        else if (s[i].avg > 50)
            s[i].grade = 'D';
        else
            s[i].grade = 'F';
    }
    printf("Student mark details:\n");
    printf(" Sl.No\t Name\t\t\t Sub1\tSub2\tSub3\t Sub4\tSub5\tTotal\t Average\tGrade\n");
    for (i = 0; i < 5; i++)
    {
        printf(" %d\t %s\t\t\t", i + 1, s[i].name);
        for (j = 0; j < 5; j++)
            printf("%d\t", s[i].mark[j]);
        printf("%d\t %f\t%c\n", s[i].total, s[i].avg, s[i].grade);
    }
}
