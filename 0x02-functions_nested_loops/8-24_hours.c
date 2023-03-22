#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: Always 0
 */
void jack_bauer(void)
{
	int i, j, k, l = 48;

	while (i < 51)
	{
		while (j < 52)
		{
			while (k < 54)
			{
				while (l < 58)
				{
					_putchar(i);
					_putchar(j);
					_putchar(58);
					_putchar(k);
					_putchar(l);
					_putchar(10);

					l++;
				}
				k++;
			}
			j++;
		}
		i++;
	}					
}
