#include "main.h"

/**
 * _print_rev_recursion - a function that returns the length of a string.
 * @s: string to reverse
 *
 * Return: void
*/
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + sizeof(char));
		_putchar(*s);
	}
}
