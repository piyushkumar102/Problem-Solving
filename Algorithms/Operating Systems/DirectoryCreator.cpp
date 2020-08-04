#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <dirent.h>
#include <unistd.h>
#include <stdlib.h>
struct st
{
    char dname[10];
    char sdname[10][10];
    char fname[10][10][10];
    int ds, sds[10];
} dir;
struct dirent *dp;
struct stat st = {0};
int main()
{
    DIR *pDir;

    int i, j, k, n;
    printf("Number of Directories: ");
    scanf("%d", &n);
    struct st dir[n];
    for (i = 0; i < n; i++)
    {
        printf("Directory %d name: ", i + 1);
        scanf("%s", &dir[i].dname);
        mkdir(dir[i].dname);
        chdir(dir[i].dname);

        printf("No. of the Sub-Directories in %s: ", dir[i].dname);
        scanf("%d", &dir[i].ds);
        for (j = 0; j < dir[i].ds; j++)
        {
            printf("Subdirectory %d Name: ", j + 1);
            scanf("%s", &dir[i].sdname[j]);
            mkdir(dir[i].sdname[j]);
            chdir(dir[i].sdname[j]);
            printf("\n");

            printf("No. of Files in %s: ", dir[i].sdname[j]);
            printf("\n");
            scanf("%d", &dir[i].sds[j]);
            for (k = 0; k < dir[i].sds[j]; k++)
            {
                printf("File %d Name: ", k + 1);
                printf("\n");
                scanf("%s", &dir[i].fname[j][k]);
                //char name[20]=strcat(dir[i].fname[j][k],".txt")
                FILE *fp;

                fp = fopen("test.txt", "w+");
                fprintf(fp, "This is testing for fprintf...\n");
                fputs("This is testing for fputs...\n", fp);
                fclose(fp);
                rename("test.txt", dir[i].fname[j][k]);
            }
            printf("\n");

            chdir("..");
        }
        chdir("..");
    }
    printf("\nDir-Name\t\tSize\tSubDir-Name\tSize\tFiles");
    printf("\n**********************************************************************\n");
    for (i = 0; i < n; i++)
    {
        printf("%s\t\t%d", dir[i].dname, dir[i].ds);
        for (j = 0; j < dir[i].ds; j++)
        {
            printf("\t%s\t\t%d\t", dir[i].sdname[j], dir[i].sds[j]);
            for (k = 0; k < dir[i].sds[j]; k++)
                printf("%s\t", dir[i].fname[j][k]);
            printf("\n\t\t");
        }
        printf("\n");
    }
}
