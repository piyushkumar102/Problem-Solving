#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    int vowelcount = 0, conscount = 0, i;
    scanf("%s", a);
    for (i = 0; i < strlen(a); i++)
    {
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' || a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'u')
        {
            vowelcount++;
        }
        else
        {
            conscount++;
        }
    }
    printf("Vowels Count: %d\nConsonant Count:%d\n", vowelcount, conscount);
}