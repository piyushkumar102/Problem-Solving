#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct unit
{
    float x1, x2;
    float y1, y2;
} d1;
int main()
{
    float midpointx, midpointy;
    float totalx = 0, totaly = 0, dist = 0;
    scanf("%f %f", &d1.x1, &d1.y1);
    scanf("%f %f", &d1.x2, &d1.y2);
    totalx = d1.x1 - d1.x2;
    totalx = pow(totalx, 2);
    midpointx = (d1.x1 + d1.x2) / 2;
    midpointy = (d1.y1 + d1.y2) / 2;
    totaly = d1.y1 - d1.y2;
    totaly = pow(totaly, 2);
    dist = sqrt(totalx + totaly);
    printf("Distance : %.2f\n", dist);
    printf("Midpoint : %.2f %.2f\n", midpointx, midpointy);
    return 0;
}