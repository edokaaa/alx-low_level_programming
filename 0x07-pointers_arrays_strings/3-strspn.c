#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: the string
 * @accept: the prefix string to search
 *
 * Return: the number of bytes in te initial segment of s
 * which consist only of bytes from accepts.
*/
unsigned int _strspn(char *s, char *accept)
{
	int i, j, found;
	unsigned int n;

	n = 0;
	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		found = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				found = 1;
				n++;
				break;
			}
			j++;
		}
		if (!found)
			break;
		i++;
	}

	return (n);
}
