#include <stdio.h>

/**
 * main - that prints the alphabet in lowercase
 *
 * Return: 0
 */
int main(void)
{
	int c;

	for (c = 97; c <= 122; c++)
	{
		if (c == 101 || c == 113)
		{
			continue;
		} else
		{
			putchar(c);
		}
	}
	putchar(10);

	return (0);
}
