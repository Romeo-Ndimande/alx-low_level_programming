#include "main.h"

/**
 * print_alphabet_10x - prints the alphabet 10x in lowercase
 * then a new line
 * prints the alphabet 10x
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);
		_putchar('\n');

	}
}
