#include "main.h"

/**
 * is_prime_number - says if an integer is a prime number
 * @n: number to evaluate
 * Return: 1 if n is a prime number, 0 if it is not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_number(n, n - 1));	
}
/**
 * _prime_number - determines if number is a prime number or not
 * @n: number to evaluate
 * @i: the iterator
 * Return: 1 if n is prime, else 0
 */
int is_prime_number(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (is_prime_number(n, i -1));
}


