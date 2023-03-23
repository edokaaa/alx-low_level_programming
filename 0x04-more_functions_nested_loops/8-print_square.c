#include "main.h"

/**
 * print_square - function that prints a square, followed by a new line.
 * @size: size is the size of the square
 */
void print_square(int size)
{
	int i, j;

	if (size == 0)
	{
		_putchar('\n');
	} else
	{
		i = 0;
		while (i < size)
		{
			j = 0;
			while (j < size)
			{
				_putchar(35);
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
