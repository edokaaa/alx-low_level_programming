#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - earches for a value in a sorted array of integers
 * using the Jump search algorithm.
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in array.
 * @value: the value to search for.
 *
 * Return: index where value is located or -1 if not found.
*/
int jump_search(int *array, size_t size, int value)
{
	size_t js, i, low, high;

	js = sqrt(size); /* jump size */
	i = 0, low = 0,	high = js;

	if (array == NULL)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", low, array[low]);
		if (array[low] == value)
			return (low);

		if (array[low] <= value && value <= array[high])
		{
			printf("Value found between indexes [%ld] and [%ld]\n", low, high);
			while (low <= high)
			{
				printf("Value checked array[%ld] = [%d]\n", low, array[low]);
				if (array[low] == value)
					return (low);
				low++;
			} break;
		}
		if (high >= size)
			return (-1);

		if (array[high] < value)
			low = high, high = high + js;
		i++;
	}
	return (-1);
}
