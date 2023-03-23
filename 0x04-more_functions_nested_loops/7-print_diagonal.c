#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: the number of times the character \ should be printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int j, i = 0;

	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		while (i < n)
		{
			j = 0;

			while (j < i)
			{
				_putchar(32);
				j++;
			}
			_putchar(92);
			_putchar('\n');
			i++;
		}
	}
}
