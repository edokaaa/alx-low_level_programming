#include "main.h"

/**
 * _atoi - a function that convert a string to an integer,
 * similar to the default atoi function
 * @s: pointer to the string to convert
 *
 * Return: the converted integer
*/
int _atoi(char *s)
{
	int sign, num, i;
	unsigned int sum;
	char c;

	sign = 1; /* a flag to track the sign of the integer*/
	num = 0; /* a flag to track the end of the main integer number */
	sum = 0; /* holds the sum of our integers in their HTU form*/

	for (i = 0; s[i] != '\0'; i++)
	{
		c = s[i];
		/* ignore every other character after getting the main integers*/
		if (c == ' ' && num > 0)
			break;
		/* taking note of the signs */
		if (c == '-')
			sign *= -1;
		/* here is our integer*/
		if (c >= '0' && c <= '9')
		{ /* we add each valid int to sum */
			sum = sum * 10 + (c - 48);
			num++;
		}
	}
	return (sum * sign);
}
