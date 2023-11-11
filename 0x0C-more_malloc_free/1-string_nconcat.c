#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 *  *string_nconcat - concates two strings
 *  pointer points to newly allocated space in memory
 *  which has s1, followed by n bytes of s2
 *  @s1: string length 1
 *  @s2: string length 2
 *  @n: number of bytes of memory
 *  Return: Null
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int st1 = strlen(s1);
	int st2 = strlen(s2);
	int st3 = st1 + n;

	char *string = (char *)malloc((st3 + 1) * sizeof(char));
		if (n >= st2)
	{
		if  (string == NULL)
		{
		return (NULL);
		}
	}
	unsigned int i, j;

	for (i = 0; i < st1; i++)
	{
		string[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		string[st1 + j] = s2[j];
	}
	string[st3] = '\0';

	return (string);
}
