#include <unistd.h>

/**
 * _putchar - writes the character c to stdout.
 * This function was provided for use in this project.
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
