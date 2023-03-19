#include <stdio.h>

/**
 * main - prints all possible combo of three-digit number
 *
 * Return: 0
 */
int main(void)
{
	int i, j, k, l; /* first, second, third & fourth  number */

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (k = 48; k <= 57; k++)
			{
				for (l = 48; l <= 57; l++)
				{
					if (j < l && i <= k && ((i != j && j != k && k != l)
								|| (j <= l && i != k) || (i == k && j != l)))
					{
						/*
						 * Repetition is only avoided
						 * when i < j < k
						 */
						putchar(i);
						putchar(j);
						putchar(32);
						putchar(k);
						putchar(l);
						/*
						 * if (i == 57 && j == 56 && k == 57 && l == 57)
						 * {
						 * break;
						 * }
						 */
						putchar(44); /* comma */
						putchar(32); /* space */
					} else
					{
						continue;
					}
				}
			}
		}
	}
	putchar(10); /* prints new line */
	return (0);
}
