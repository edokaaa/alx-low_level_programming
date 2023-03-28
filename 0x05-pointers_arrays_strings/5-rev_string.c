#include "main.h"
#include <stdio.h>

/**
 * rev_string - a function that reverses a string.
 * @s: string to be reversed
 *
 * Return: void
*/
void rev_string(char *s)
{
	int i, j, temp;

	/* get the length of the string */
	for (i = 0; s[i] != '\0'; i++)
		;

	/* decrease i by 1 to get the actually array-like length*/
	i--;

	/* now loop and swap the values of the chars of s */

	j = 0;
	while (j < i)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		j++;
		i--;
	}
}
