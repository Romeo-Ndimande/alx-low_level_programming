#include "main.h"

/**
 * _isalpha - checks alphabetic character
 * @c: the character will be checked
 *
 * Return: 1 if c  is a letter, otherwise 0
 */
int _isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
