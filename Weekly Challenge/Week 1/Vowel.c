#include <stdio.h>
int main()
{
    char letter;
    scanf("%c", &letter);
    if (letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U' || letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u')
    {
        printf("Vowel\n");
    }
    else if ((letter >= 97 && letter <= 122) || (letter >= 65 && letter <= 90))
    {
        printf("Consonant\n");
    }
    else
    {
        printf("Special Character\n");
    }
}