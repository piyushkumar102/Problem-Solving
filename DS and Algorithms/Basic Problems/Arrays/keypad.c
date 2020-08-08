#include <stdio.h>
#include <string.h>
int main()
{
	int tar_no, no_clicks;
	int i, j;
	char s;
	printf("Enter the target number: \n");
	scanf("%d", &tar_no);
	printf("Enter the no_clicks: \n");
	scanf("%d", &no_clicks);
	char a[12][4] = {
		{'\0', '\0', '\0', '\0'},
		{'A', 'B', 'C'},
		{
			'D',
			'E',
			'F',
		},
		{'G', 'H', 'I'},
		{'J', 'K', 'L'},
		{'M', 'N', 'O'},
		{'P', 'Q', 'R', 'S'},
		{'T', 'U', 'V'},
		{'W', 'X', 'Y', 'Z'},
		{
			'\0',
			'\0',
			'\0',
			'\0',
		},
		{
			'-',
			'\0',
			'\0',
			'\0',
		},
		{
			'\0',
			'\0',
			'\0',
			'\0',
		}};
	if (no_clicks > strlen(a[tar_no - 1]))
	{
		no_clicks = no_clicks / 2;
	}

	s = a[tar_no - 1][no_clicks - 1];

	printf("%c", s);
}
