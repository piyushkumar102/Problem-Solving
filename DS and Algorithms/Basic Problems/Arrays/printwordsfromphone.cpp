#include <stdio.h>
#include <string.h>
const char hashtable[10][5] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void printworduntil(int arr[], int currentdigit, char str[], int n)
{
	int i;
	if (currentdigit == n)
	{
		printf("%s,", str);
		return;
	}
	for (i = 0; i < strlen(hashtable[arr[currentdigit]]); i++)
	{
		str[currentdigit] = hashtable[arr[currentdigit]][i];
		printworduntil(arr, currentdigit + 1, str, n);
		if (arr[currentdigit] == 0 || arr[currentdigit] == 1)
			return;
	}
}

void printword(int arr[], int n)
{
	char str[n + 1];
	str[n] = '\0';
	printworduntil(arr, 0, str, n);
}

int main()
{
	int n;
	scanf("%d", &n);
	int i, arr[n];
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	printword(arr, n);
}
