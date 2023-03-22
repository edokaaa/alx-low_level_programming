#include <stdio.h>
#include "main.h"

/**
 * print_times_table - function that prints the 9 times table
 * @n: the input number
 *
 * Return: 0
 */
void print_times_table(int n)
{
	int i, j;

	if (n > 15 || n < 0)
		return;

	if (n == 0)
	{
		printf("0\n");
		return;
	}

	j = 0;
	while (j <= n)
	{
		i = 0;
		while (i <= n)
		{
			if (i == n)
			{
				printf("%3d\n", i * j);
			} else if (i == 0)
			{
				printf("%d, ", i * j);
			} else
			{
				printf("%3d, ", i * j);
			}
			i++;
		}
		j++;
	}

}
