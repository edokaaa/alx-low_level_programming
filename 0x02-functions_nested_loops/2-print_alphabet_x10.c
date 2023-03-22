#include "main.h"

/**
 * print_alphabet_x10 - this function prints the alphabets in lowercase
 * 10 times, followed by a new line
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		int c = 97;

		while (c <= 122)
		{
			_putchar(c);
			c++;
		}
		_putchar(10);
		i++;
	}
}
