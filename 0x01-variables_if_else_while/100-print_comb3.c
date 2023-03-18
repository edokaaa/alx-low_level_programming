#include <stdio.h>

/**
 * main - prints all possible combo of a single-digit number
 *
 * Return: 0
 */
int main(void)
{
	int i; /* first number */
	int j; /* second number */

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			/*
			 * This avoids the repition of the two numbers
			 * If i equals j, this implies
			 * that the numbers are the same
			 *
			 * and if i > j, it implies
			 * that the number has already occured
			 */
			if (i < j)
			{
				putchar(i);
				putchar(j);
				if (i == 56 && j == 57)
				{
					continue;
				} else
				{
					/*
					 * adds ", " to all numbers
					 * except the first
					 */
					putchar(44); /* comma */
					putchar(32); /* space */
				}

			} else
			{
				continue;
			}
		}
	}
	putchar(10); /* prints new line */
	return (0);
}
