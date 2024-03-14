#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - a function that searches for a value in an array
 * of intergers using the Linear search algorithm.
 * @array: pointer to the firt element of the array to search in
 * @size: number of elements in array
 * @value: value to search for.
 *
 * Return: index where value is located or -1 if otherwise.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}

	return (-1);
}
