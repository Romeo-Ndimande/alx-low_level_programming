#include "main.h"

/**
 * main - function prints 0-100, prints Fizz for multiples of 3, Buzz for multiples of 5
 * prints fizzBuzz
 *
 * Return: always 0
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3) == 0 && (num % 5) == 0)
			printf("FizzBuzz")
		else if ((num % 3) == 0)
			printf("Fizz")
		else if ((num % 5) == 0)
			printf("Buzz")
		else 
			printf("%d", num);

		if (num == 100)
			continue;
		printf(" ");
	}
	printf("\n");

	return (0);
}
