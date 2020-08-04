//Store Array in reverse order
#include <stdio.h>
int main()
{
    int n, c, t, e;    
    scanf("%d", &n);
    int array[n];
    e = n - 1;    
    for (c = 0; c < n; c++) 
	{
        scanf("%d", &array[c]);
    }    
    for (c = 0; c < n/2; c++) 
	{
        t = array[c];
        array[c] = array[e];
        array[e] = t;    
        e--;
    }  
    for (c = 0; c < n; c++) 
	{
        printf("%d ", array[c]);
    }    
    return 0;
}
