#include "main.h"
/**
 * rev_string - function reverses a string
 * @s: input string
 * Return: spring in reverse
 */

void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0;
	int i;

	while (s[counter] != '\0')
		counter++;
	for (i <0; i < counter; i++)
	{
		counter--;
		rev = [i];
		s[i] = s[counter];
		s[counter] = rev;
	}
}
