#include <stdio.h>

/**
 * main - that prints the alphabet in lowercase in reverse
 *
 * Return: 0
 */
int main(void)
{
	int c = 122;

	while (c >= 97)
	{
		putchar(c);
		c--;
	}
	putchar(10);

	return (0);
}
