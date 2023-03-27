#include "main.h"

/**
 * puts_half - a function that prints half of a string,
 * followed by a new line.
 * @str: string to print
 *
 * Return: void
*/
void puts_half(char *str)
{
	int i, n;

	/* get length of str */
	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	n = i / 2; /* half*/
	while (*(str + n) != '\0')
	{
		_putchar(*(str + n));
		n++;
	}
	_putchar('\n');
}
