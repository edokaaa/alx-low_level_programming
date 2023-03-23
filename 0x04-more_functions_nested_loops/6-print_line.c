#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal.
 * @n: specifies the length of the line wrt `_`
 *
 * Return: void
 */
void print_line(int n)
{
	int i = 0;

	if (n != 0)
	{
		while (i < n)
		{
			_putchar(95);
			i++;
		}
	}
	_putchar('\n');
}
