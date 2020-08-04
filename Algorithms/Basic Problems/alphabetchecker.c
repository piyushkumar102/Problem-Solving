//Check if a character is Alphabet or Not
#include <stdio.h>
int main()
{
    char a;
    printf("Enter a Character");
    scanf("%c", &a);
    if (a >= 'A' && a <= 'Z' || a >= 'a' && a <= 'z')
        printf("Alphabet");
    else
        printf("Not an Alphabet");
    return 0;
}
