#include "main.h"

/**
 * _pow - raise to power
 * @a: base
 * @b: exponent
 *
 * Return: a ^ b
*/
int _pow(int a, int b)
{
	if (b == 0)
		return (1);
	if (a == 0)
		return (0);
	return (a * _pow(a, b - 1));
	/*
	* return ((int)(pow((double) a, (double) b)));
	*/
}

/**
 * print_number - decomposes and prints a number using _putchar
 * @n: the number to be printed
 *
 * Return: Void
*/
void print_number(int n)
{
	int i = 1;

	/* get the absolute value of n */
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	/* get the number of digits */
	while ((n / _pow(10, i)) > 0)
	{
		/* _putchar(48 + ((n / _pow(10, i - 1) % 10))); */
		i++;
	}
	/* print the digits */
	while (i > 0)
	{
		_putchar(48 + ((n / _pow(10, i - 1) % 10)));
		i--;
	}

	/* The Algorithm */
	/*
	* if (n has 3 digit) say 692
	* {
	*	first = (n / (10 ^ 2) % 10); ==> (692/100) % 10 ==> 6 % 10 = 6
	*	second = (n / (10 ^ 1) % 10); ==> (692/10) % 10 ==> 69 % 10 = 9
	*	third = (n / (10 ^ 0) % 10); ==> (692/1) % 10 ==> 692 % 10 = 2
	*
	*	ith number = (N / 10 ^ (n - i)) % 10
	*	where N = the number and n = the number of digits of N
	*}
	*/
}
