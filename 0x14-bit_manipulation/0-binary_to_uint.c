#include "main.h"

/**
 * binary_to_uint - a function that
 * converts a binary number to an unsigned int.
 * @b: pointer to the string
 *
 * Return: the coverted number or 0 on failure
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	int i, j;

	if (b == NULL || *b == '\0')
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
	}
	j = 0;
	i--;
	num = 0;
	while (b[j] != '\0')
	{
		if (b[j] == '1')
		{
			num += _pow_recursion(2, i);
		}
		i--;
		j++;
	}
	return (num);
}

/**
 * _pow_recursion - a function that calculates the exponent of a number.
 * @x: the base
 * @y: the exponent
 *
 * Return: the value of x raised to the power of y.
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}

