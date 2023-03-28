#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that prints n elements of an array of integers,
 * followed by a new line.
 * @a: the array of integers
 * @n: number of elements to be printed
 *
 * Return: void
*/
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i > 0)
		{
			printf(", ");
		}
		printf("%d", a[i]);
		i++;
	}
	printf("\n");
}
