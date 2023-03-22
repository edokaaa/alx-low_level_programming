#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: Always 0
 */
void jack_bauer(void)
{
	int i, j, k, l;

	i = 48;
	while (i < 51)
	{
		j = 48;
		while (j < 58)
		{
			if (i == 50 && j == 52)
				break;
			k = 48;
			while (k < 54)
			{
				l = 48;
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
