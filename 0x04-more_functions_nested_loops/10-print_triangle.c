#include "main.h"

/**
 * print_triangle - function that prints a triangle, followed by a new line
 * @size: size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		i = 0;
		while (i < size)
		{
			j = size - 1;
			k = 0;

			while (j > i)
			{
				_putchar(' ');
				j--;
			}
			while (k <= i)
			{
				_putchar('#');
				k++;
			}
			_putchar('\n');
			i++;
		}
	}
}
