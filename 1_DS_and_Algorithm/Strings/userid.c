#include <stdio.h>
#include <string.h>
int main()
{
    char user[100];
    int i, u = 0, l = 0, num = 0, spe = 0;
    scanf("%s", user);
    for (i = 0; i < strlen(user); i++)
    {
        if (user[i] >= 'A' && user[i] <= 'Z')
        {
            u++;
        }
        else if (user[i] >= 'a' && user[i] <= 'z')
        {
            l++;
        }
        else if (user[i] >= '0' && user[i] <= '9')
        {
            num++;
        }
    }
    for (i = 0; i < strlen(user) - 1; i++)
    {
        if (user[i] == '.')
        {
            if (i == 0 || i == (strlen(user) - 1) || user[i + 1] == '.')
            {
                spe = 0;
                break;
            }
            else
            {
                spe++;
            }
        }
        else
        {
            continue;
        }
    }
    if (u != 0 && l != 0 && num != 0 && spe != 0)
    {
        printf("%s is a valid ID", user);
    }
    else
    {
        printf("%s is an invalid ID", user);
    }
}
