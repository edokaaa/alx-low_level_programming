#include "main.h"

/**
 * print_binary -  calls the main printing function (_binary)
 * if the number is not 0.
 * @n: the number to print
 *
 * Return: nothing
*/
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
	{
		_binary(n);
	}
}

/**
 * _binary -  a function that prints
 * the binary representation of a number.
 * @n: the number to print
 *
 * Return: nothing
*/

void _binary(unsigned long int n)
{
	unsigned long int div, mod;

	if (n != 0)
	{
		/* divide by 2*/
		div = n >> 1;
		/**
		 * multiply by 2
		 * and minus from original num to get mod
		*/
		mod = n - (div << 1);
		_binary(div);
		_putchar('0' + mod);
	}
}
