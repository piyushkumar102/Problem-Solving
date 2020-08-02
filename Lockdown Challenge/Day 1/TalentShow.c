/*Talent Show
Mountain View Middle School is all set for organizing their elaborate talent show event of the year, "Stars Onstage". It is a fun-filled event for the students to showcase and build their confidence.
Of the total audience who had come for the show, 1/3 were boys, 3/6 were girls and the rest of them were adults. If there were 'x' more girls than adults, how many people were there in total? Help the School authorities to find the total people who visited their show. 
*/
#include <stdio.h>
int main()
{
    int total, boys, girls, adults, x;
    scanf("%d", &x);
    boys = x;
    girls = (3 * x) / 2;
    adults = x / 2;
    total = boys + girls + adults;
    printf("%d ", total);
}