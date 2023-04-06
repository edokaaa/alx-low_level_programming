#include "main.h"

/**
 * _strlen_recursion -  a function that returns the length of a string
 * using recurion.
 * @s: string
 *
 * Return: length of the string s.
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + sizeof(char)));
}
