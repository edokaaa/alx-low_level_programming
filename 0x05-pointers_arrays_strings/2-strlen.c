#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 * @s: the input string
 *
 * Return: the length of the string.
*/
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}

	return (i);
}
