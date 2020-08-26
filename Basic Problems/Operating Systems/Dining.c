//Dining Philosopher Problem
#include <stdio.h>
#include <stdlib.h>
int wait(int s)
{
  s = s - 1;
  return s;
}
int signal(int s)
{
  s = s + 1;
  return s;
}
int main()
{
  int m, c, s, chop[5] = {1, 1, 1, 1, 1}, i;
  while (1)
  {
    printf("\n Enter your choice ");
    scanf("%d", &c);

    switch (c)
    {
    case 1:
    {
      printf("\n enter process number to pickup");
      scanf("%d", &i);
      if (chop[i] == 1 && chop[((i + 1) % 5)] == 1)
      {
        chop[i] = wait(chop[i]);
        chop[((i + 1) % 5)] = wait(chop[((i + 1) % 5)]);
        printf("\n The philosopher is eating ");
      }
      else
      {
        printf("\n philosopher is thinking");
      }
      break;
    }
    case 2:
    {
      printf("\n enter process number to putdown");
      scanf("%d", &i);

      chop[i] = signal(chop[i]);
      chop[((i + 1) % 5)] = signal(chop[((i + 1) % 5)]);
      printf("%d %d", chop[i], chop[((i + 1) % 5)]);

      break;
    }
    case 3:
    {
      exit(0);
    }
    }
  }
  return 0;
}
