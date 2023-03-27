#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 * followed by a new line
 * @s: string to be printed
 *
 * Return: void
*/
void print_rev(char *s)
{
	int i = 0;

	/* get the length of the string first*/
	while (*(s + i) != '\0')
	{
		i++;
	}

	/* now loop backwards from the last char*/
	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}
