#include "main.h"

/**
 * print_alphabet - this function prints the alphabets in lowercase
 *
 * Return: void
 */
void print_alphabet(void)
{
	int c = 97;

	while (c <= 122)
	{
		_putchar(c);
		c++;
	}
	_putchar(10);
}
