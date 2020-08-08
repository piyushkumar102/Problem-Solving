#include <stdio.h>

int main()
{
  int n, bt[20], wt[20], tat[20], avwt = 0, avtat = 0, i, j, time_quantum, time, count, remain, rt[20], flag = 0, wait_time, turnaround_time, at[20];
  printf("Enter total number of processes(maximum 20):");
  scanf("%d", &n);

  printf("\nEnter Process Burst Time\n");
  for (i = 0; i < n; i++)
  {
    printf("P[%d]:", i + 1);
    scanf("%d", &bt[i]);
  }

  wt[0] = 0; //waiting time for first process is 0

  //calculating waiting time
  for (i = 1; i < n; i++)
  {
    wt[i] = 0;
    for (j = 0; j < i; j++)
      wt[i] += bt[j];
  }

  printf("\nProcess\t\tBurst Time\tWaiting Time\tTurnaround Time");

  //calculating turnaround time
  for (i = 0; i < n; i++)
  {
    tat[i] = bt[i] + wt[i];
    avwt += wt[i];
    avtat += tat[i];
    printf("\nP[%d]\t\t%d\t\t%d\t\t%d", i + 1, bt[i], wt[i], tat[i]);
  }

  avwt /= i;
  avtat /= i;
  printf("\n\nAverage Waiting Time:%d", avwt);
  printf("\nAverage Turnaround Time:%d", avtat);
  printf("Enter Time Quantum:\t");
  scanf("%d", &time_quantum);
  printf("\n\nProcess\t|Turnaround Time|Waiting Time\n\n");
  for (time = 0, count = 0; remain != 0;)
  {
    if (rt[count] <= time_quantum && rt[count] > 0)
    {
      time += rt[count];
      rt[count] = 0;
      flag = 1;
    }
    else if (rt[count] > 0)
    {
      rt[count] -= time_quantum;
      time += time_quantum;
    }
    if (rt[count] == 0 && flag == 1)
    {
      remain--;
      printf("P[%d]\t|\t%d\t|\t%d\n", count + 1, time - at[count], time - at[count] - bt[count]);
      wait_time += time - at[count] - bt[count];
      turnaround_time += time - at[count];
      flag = 0;
    }
    if (count == n - 1)
      count = 0;
    else if (at[count + 1] <= time)
      count++;
    else
      count = 0;
  }
  printf("\nAverage Waiting Time= %f\n", wait_time * 1.0 / n);
  printf("Avg Turnaround Time = %f", turnaround_time * 1.0 / n);

  return 0;
}
