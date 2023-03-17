#include <stdio.h>

/**
 * main - print numbers and letter of base 16
 *
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		putchar(a);
	}
	for (a = 97; a <= 102; a++)
	{
		putchar(a);
	}
	putchar(10);
	return (0);
}
