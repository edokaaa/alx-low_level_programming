#include "main.h"

/**
 * reverse_array - a function that
 * reverses the content of an array of integers.
 * @a: pointer to the array
 * @n: number of elements of a
 *
 * Return: void
*/
void reverse_array(int *a, int n)
{
	int temp, i;

	i = 0;
	while (i < n / 2)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
		i++;
	}
}
