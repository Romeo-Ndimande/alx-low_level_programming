#include "main.h"
/**
 * _puts - prints a string to the stdout then a new line
 * @str: string to print
 */

void _puts(char *str)
{
	while (*str != '\0')

	{
		putchar(*str++);
	}
		putchar('\n');
}
