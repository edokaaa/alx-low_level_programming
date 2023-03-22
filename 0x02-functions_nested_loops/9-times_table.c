#include <stdio.h>
#include "main.h"

/**
 * times_table - function that prints the 9 times table
 *
 * Return: 0
 */
void times_table(void)
{
	int i, j;

	j = 0;
	while (j < 10)
	{
		i = 0;
		while (i < 10)
		{
			if (i == 9)
			{
				printf("%2d\n", i * j);
			} else if (i == 0)
			{
				printf("%d, ", i * j);
			} else
			{
				printf("%2d, ", i * j);
			}
			i++;
		}
		j++;
	}
}
