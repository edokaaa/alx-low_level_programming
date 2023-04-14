#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers.
 * @min: the minimum value of the array
 * @max: the maximum value of the array
 *
 * Return: pointer to the newly created array
 * or NULL if anything fails.
*/
int *array_range(int min, int max)
{
	int *arr, len, i;

	if (min > max)
		return (NULL);

	len = max - min + 1;
	arr = malloc(sizeof(*arr) * len);

	if (arr == NULL)
		return (NULL);

	i = 0;
	while (i < len)
	{
		arr[i] = min + i;
		i++;
	}

	return (arr);
}
