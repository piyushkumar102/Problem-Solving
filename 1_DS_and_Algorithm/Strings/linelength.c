#include <stdio.h>
#define MAXLINE 1000
int getline(char s[], int lim)
{
	int c, i;
	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) //upto index lim-1||EOF||\n
		s[i] = c;
	if (c == '\n')
	{
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}
void copy(char to[], char from[])
{
	int i = 0;
	while ((to[i] = from[i]) != '\0') //copy lines
		++i;
}
int main()
{
	int len, max;
	char line[MAXLINE];	   //Char array of 1000
	char longest[MAXLINE]; //Char array of longest line
	max = 0;
	while ((len = getline(line, MAXLINE)) > 0) //getline until its less than 0
	{
		if (len > max)
		{
			max = len;
			copy(longest, line);
		}
	}
	if (max > 0)
		printf("%s", longest);
	return 0;
}
