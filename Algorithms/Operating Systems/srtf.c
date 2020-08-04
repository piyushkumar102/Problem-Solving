// Sortest Remaining Time First Algorithm
#include <stdio.h>
int main()
{
    int at[10], bt[10], rt[10], endTime, i, smallest;
    int remain = 0, n, time, sum_wait = 0, sum_turnaround = 0;
    printf("Enter no of Processes : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter arrival time for Process P%d : ", i + 1);
        scanf("%d", &at[i]);
        printf("Enter burst time for Process P%d : ", i + 1);
        scanf("%d", &bt[i]);
        rt[i] = bt[i];
    }
    printf("\n\nProcess\t|Turnaround Time| Waiting Time\n\n");
    rt[9] = 9999;
    for (time = 0; remain != n; time++)
    {
        smallest = 9;
        for (i = 0; i < n; i++)
        {
            if (at[i] <= time && rt[i] < rt[smallest] && rt[i] > 0)
            {
                smallest = i;
            }
        }
        rt[smallest]--;
        if (rt[smallest] == 0)
        {
            remain++;
            endTime = time + 1;
            printf("\nP[%d]\t|\t%d\t|\t%d", smallest + 1, endTime - at[smallest], endTime - bt[smallest] - at[smallest]);
            sum_wait += endTime - bt[smallest] - at[smallest];
            sum_turnaround += endTime - at[smallest];
        }
    }
    printf("\n\nAverage waiting time = %f\n", sum_wait * 1.0 / n);
    printf("Average Turnaround time = %f", sum_turnaround * 1.0 / 5);

    for (i = 0; i < n; i++)
    {
        pos = i;
        for (j = i + 1; j < n; j++)
        {
            if (bt[j] < bt[pos])
                pos = j;
        }

        temp = bt[i];
        bt[i] = bt[pos];
        bt[pos] = temp;

        temp = p[i];
        p[i] = p[pos];
        p[pos] = temp;
    }

    wt[0] = 0;

    for (i = 1; i < n; i++)
    {
        wt[i] = 0;
        for (j = 0; j < i; j++)
            wt[i] += bt[j];

        total += wt[i];
    }

    avg_wt = (float)total / n;
    total = 0;

    printf("\nProcess\t    Burst Time    \tWaiting Time\tTurnaround Time\tarrival time");
    for (i = 0; i < n; i++)
    {
        tat[i] = bt[i] + wt[i];
        total += tat[i];
        printf("\np%d\t\t  %d\t\t    %d\t\t\t%d\t\t\t%d", p[i], bt[i], wt[i], tat[i], arr[i]);
    }

    avg_tat = (float)total / n;
    printf("\n\nAverage Waiting Time=%f", avg_wt);
    printf("\nAverage Turnaround Time=%f\n", avg_tat);
}
return 0;
}
