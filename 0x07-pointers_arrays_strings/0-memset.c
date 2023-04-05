#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 * @s: the pointer to the memory area to be filled
 * @b: the constants byte
 * @n: the number of bytes to fill
 *
 * Return: a pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n || s[i] != '\0')
	{
		s[i] = b;
		i++;
	}

	return (s);
}
