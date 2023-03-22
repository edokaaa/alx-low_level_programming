#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 * @n: the input number
 *
 * Return: the last digit of n
 */
int print_last_digit(int n)
{

	if (n >= 0)
	{
		printf("%d", n % 10);
		return (n % 10);
	}
	printf("%d", -n % 10);
	return (-n % 10);
}
