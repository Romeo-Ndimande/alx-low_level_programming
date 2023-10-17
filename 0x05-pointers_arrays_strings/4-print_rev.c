#include "main.h"
/**
 * print_rev - funtion prints a string reverse then a new line
 * @s: string
 * Retunr:0
 */

void print_rev(char *s)
{
	int longi = 0;
	int o;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (o = longi; o > 0; o--)
	{
		putchar(*s);
		s--;
	}
	putchar('\n');
}
