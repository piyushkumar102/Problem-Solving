/*Write a program to accomplish the following tasks.
    Copy the string into another string.
    Split the string into different words and store it
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char string1[100], copy[100], divided[20][100];
    int word = 0, j = 0, i;
    gets(string1);
    strcpy(copy, string1);
    puts(copy);
    for (i = 0; i <= strlen(string1); i++)
    {
        if (string1[i] == ' ' || string1[i] == '\0')
        {
            divided[word][j] = '\0';
            word++;
            j = 0;
        }

        else
        {
            divided[word][j] = string1[i];
            j++;
        }
    }
    printf("Input String: %s\n", string1);
    printf("Copied String: %s\n", copy);
    printf("Divided String:\n");
    for (i = 0; i < word; i++)
        printf("%s\n", divided[i]);
}
