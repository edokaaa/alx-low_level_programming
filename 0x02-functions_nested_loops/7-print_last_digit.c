#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 * @n: the input number
 *
 * Return: the last digit of n
 */
int print_last_digit(int n)
{
	int l;

	if (n >= 0)
	{
		l = n % 10;
		_putchar(48 + l);
		return (l);
	}
	l = -n % 10;
	_putchar(48 + l);
	return (l);
}
