#include <stdio.h>

/**
 * main - prints from 0 to 9
 * using only putchar (twice)
 *
 * Return: 0
 */
int main(void)
{
	int n = 48;

	while (n < 58)
	{
		putchar(n);
		n++;
	}
	putchar(10);

	return (0);
}
