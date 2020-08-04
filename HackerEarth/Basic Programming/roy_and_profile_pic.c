#include <stdio.h>
int main()
{
    int L;
    scanf("%d", &L);
    int N;
    scanf("%d", &N);
    int i;
    for (i = 0; i < N; i++)
    {
        int W, H;
        scanf("%d %d", &W, &H);
        if (W < L || H < L)
        {
            printf("UPLOAD ANOTHER\n");
        }
        else if (W != H)
        {
            printf("CROP IT\n");
        }
        else
        {
            printf("ACCEPTED\n");
        }
    }
}