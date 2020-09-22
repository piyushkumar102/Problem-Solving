/*n the city of Toy land, there are N houses. 
Noddy is looking for a piece of land in the city to build his house. 
He wants to buy the land where he can build the largest possible house.
All the houses in the city lie in a straight line and all of them are given a house number and position of the house from the entry point in the city. 
Noddy wants to find the house numbers between which he can build the largest house.
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    int i, j, temp, sub, max = 0, start, end, flag1 = 1, flag = 1, start1, end1;
    scanf("%d", &n);
    int house_num[n], house_pos[n], sorted_house_pos[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d %d", &house_num[i], &house_pos[i]);
        sorted_house_pos[i] = house_pos[i];
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (sorted_house_pos[j] > sorted_house_pos[j + 1])
            {
                temp = sorted_house_pos[j];
                sorted_house_pos[j] = sorted_house_pos[j + 1];
                sorted_house_pos[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < n - 1; i++)
    {
        sub = 0;
        sub = abs(sorted_house_pos[i + 1] - sorted_house_pos[i]);
        if (sub > max)
        {
            start = sorted_house_pos[i];
            end = sorted_house_pos[i + 1];
            max = sub;
        }
    }
    printf("\n%d %d", start, end);
    for (i = 0; i < n; i++)
    {
        if (start == house_pos[i] && flag1 != 0)
        {
            start1 = house_num[i];
            flag1 = 0;
        }
        if (end == house_pos[i] && flag != 0)
        {
            end1 = house_num[i];
            flag = 0;
        }
    }
    printf("%d %d", start1, end1);
}