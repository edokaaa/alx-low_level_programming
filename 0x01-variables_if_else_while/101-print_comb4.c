#include <stdio.h>

/**
 * main - prints all possible combo of three-digit number
 *
 * Return: 0
 */
int main(void)
{
	int i, j, k; /* first, second and third  number */

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (k = 48; k <= 57; k++)
			{
				if (i < j && j < k)
				{
					/*
					 * Repetition is only avoided
					 * when i < j < k
					 */
					putchar(i);
					putchar(j);
					putchar(k);

					if (i == 55 && j == 56 && k == 57)
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
	}
	putchar(10); /* prints new line */
	return (0);
}
