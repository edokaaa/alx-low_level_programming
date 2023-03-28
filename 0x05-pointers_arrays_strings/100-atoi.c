#include "main.h"
#include <stdlib.h>

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

/**
 * _atoi - a function that convert a string to an integer,
 * similar to the default atoi function
 * @s: pointer to the string to convert
 *
 * Return: the converted integer
*/
int _atoi(char *s)
{
	int i, j, sign, num, sum, ch_index;
	char c, *ch;

	ch = malloc(sizeof(char) * 50); /* character buffer */
	sign = 0; /* a flag to track the sign of the integer*/
	num = 0; /* a flag to track the end of the main integer number */
	ch_index = 0; /* holds the length of the main integer number */

	for (i = 0; s[i] != '\0'; i++)
	{
		c = s[i];
		/* ignore every other character after getting the main integers*/
		if (c == ' ' && num > 0)
			break;
		/* taking note of the signs */
		if (c == '-')
			sign++;
		/* here is our integer*/
		if (c >= '0' && c <= '9')
		{ /* we add each valid int to an array */
			ch[ch_index] = c;
			ch_index++;
			num++;
		}
	}
	sum = 0; /* holds the sum of our integers in their HTU form*/
	i = ch_index; /* the length of the main integer number*/

	for (j = 0; j < ch_index; j++)
	{
		/* calculating the HTU value of each char (int) in the array using _pow*/
		/* and converting it to integer using its ascii value*/
		sum = sum + (int)((ch[j] - 48) * _pow(10, i - 1));
		i--;
	}
	/* settling the sign of the number*/
	if (sign % 2 == 1)
		sum = 0 - sum;
	free(ch);
	return (sum);
}
