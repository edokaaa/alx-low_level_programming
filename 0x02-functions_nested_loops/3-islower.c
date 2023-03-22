#include "main.h"

/**
 * _islower - checks for lowercas character
 * @c: character to be checked
 *
 * Return: 1 on success, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
