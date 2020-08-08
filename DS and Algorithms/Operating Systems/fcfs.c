#include <stdio.h>
int main()
{
    int pno, AT[10], BT[10], CT[10], TAT[10], WT[10], i, n, avg;
    float AWT, ATAT;
    printf("Enter the number of elements for Process: \n");
    scanf("%d", &n);
    printf("Enter the Arrival time of each elements: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &AT[i]);
    }
    printf("Enter the Burst time for elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &BT[i]);
    }
    CT[0] = BT[0];
    for (i = 0; i < n; i++)
    {
        CT[i + 1] += CT[i] + BT[i + 1];
    }
    printf("\nCompletion time:");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", CT[i]);
    }
    for (i = 0; i < n; i++)
    {
        TAT[i] = CT[i] - AT[i];
    }

    for (i = 0; i < n; i++)
    {
        ATAT += TAT[i];
    }
    ATAT /= n;
    printf("Average turnaround time is:%f\n", ATAT);
    for (i = 0; i < n; i++)
    {
        WT[i] = TAT[i] - BT[i];
    }
    for (i = 0; i < n; i++)
    {
        AWT += WT[i];
    }
    AWT /= n;
    printf("Avg waiting time is: %f\n", AWT);
    return 0;
}
