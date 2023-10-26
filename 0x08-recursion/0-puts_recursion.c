#include "main.h"
/**
 * _puts_recursion - function puts()
 * @s: input
 * Return: always 0
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		putchar('\n');
}