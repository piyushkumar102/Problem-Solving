/*Total Expenses for the Event
The prime functionality of an Event Management System is budgeting. 
An Event Management System should estimate the total expenses incurred by an event and the percentage rate of each of the expenses involved in planning and executing an event. 
Nikhil, the founder of "Pine Tree" wanted to include this functionality in his company’s Pineaxe Event Management System and requested your help in writing a program for the same. 
The program should get the branding expenses, travel expenses, food expenses and logistics expenses as input from the user and calculate the total expenses for an event 
and the percentage rate of each of these expenses.*/

#include <stdio.h>
int main()
{
    int n = 4, total = 0;
    int i, a[n];
    float percentage;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        total = total + a[i];
    }
    printf("%d\n", total);
    for (i = 0; i < n; i++)
    {
        percentage = (a[i] * 100) / total;
        printf("%f %%\n", percentage);
        percentage = 0;
    }
}