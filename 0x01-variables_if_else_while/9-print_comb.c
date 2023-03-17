#include <stdio.h>

/**
 * main - prints all possible combo of a single-digit number
 *
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
		putchar(x);
		if (x == 57) /* if x == 9 */
		{
			continue;
		} else
		{
			putchar(44); /* commer */
			putchar(32); /* space */
		}
	}
	putchar(10);
	return (0);
}
