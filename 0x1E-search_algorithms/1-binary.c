#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - a function that searches for a value in a sorted array
 * of intergers using the Binary search algorithm.
 * @array: pointer to the firt element of the array to search in
 * @size: number of elements in array
 * @value: value to search for.
 *
 * Return: index where value is located or -1 if otherwise.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left, right, middle, i = 0;

	left = 0;
	right = size - 1;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		print_array(&(array[left]), right - left + 1);

		middle = (left + right) / 2;

		if (array[middle] < value)
			left = middle + 1;
		else if (array[middle] > value)
			right = middle - 1;
		else
			return (middle);
		i++;
	}
	return (-1);
}

/**
 * print_array - prints the searched array.
 * @array: pointer to the first element of the array to print.
 * @size: number of elements to print
 *
 * Return: nothing.
*/
int print_array(int *array, size_t size)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	printf("Searching in array: ");

	while (i < size)
	{
		printf("%d", array[i]);
		if (i < size - 1)
			printf(", ");
		else
			printf("\n");
		i++;
	}
	return (0);
}
