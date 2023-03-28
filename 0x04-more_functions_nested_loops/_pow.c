#include <stdio.h>

/**
 * _pow - calculates the exponent of a number using recursion
 * @a: the base number
 * @b: the exponent
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
}
