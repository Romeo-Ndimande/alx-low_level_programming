#include <stdio.h>
#include <stdlib.h>
/**
 * *array_range - creates array of integers
 * @min: lowest value in the array
 * @max: highest value in the array
 *
 * Return: pointer to newly created array
 */

int *array_range(int min, int max)
{
	int *array;
	int size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	array = malloc(size * sizeof(int));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = min++;

	return (array);
}
