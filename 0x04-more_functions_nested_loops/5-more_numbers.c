#include "main.h"

/**
 * more_numbers -  prints 10 times numbers, from 0 to 14,
 * followed by a new line.
 *
 * Return: void
 */
void more_numbers(void)
{
	int c, i, j;

	for (c = 0; c < 10; c++)
	{
		i = 48;
		j = 0; /* init j to a null character */

		while (i < 59)
		{
			/*  if j is 1 and i is 4 */
			if (j == 49 && i > 52)
				break;
			if (i > 57)
			{
				/* if i is past 9 */
				i = 48;
				j = 49;
				continue;
			}
			_putchar(j);
			_putchar(i);
			i++;
		}
		_putchar('\n');
	}
}
