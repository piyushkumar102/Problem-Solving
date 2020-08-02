#include <stdio.h>
union Employee {
    int id;
    char name[100];
    char dob[11];
    char doj[11];
    float salary;
} emp;
int main()
{
    scanf("%d", &emp.id);
    printf("%d\n", emp.id);
    scanf("%s", &emp.name);
    printf("%s\n", emp.name);
    scanf("%s", &emp.dob);
    printf("%s\n", emp.dob);
    scanf("%s", &emp.doj);
    printf("%s\n", emp.doj);
    scanf("%f", &emp.salary);
    printf("%.2f\n", emp.salary);
    return 0;
}