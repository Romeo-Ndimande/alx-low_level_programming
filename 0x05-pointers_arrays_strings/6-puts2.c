#include "main.h"
/**
 * puts2 - function prints one character of two
 * starting with the first one
 * @str: string
 * Return: print
 */

void puts(char *str)
{
	int longi = 0;
	int t = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		longi++;
	}
	t = longi -1;
	for (o = 0; o <= t; o++)
	{
		if (o % 2 == 0)
		{
			putchar(str[o]);
		}
	}
	putchar('\n');
}
