#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 * similar to the _strcat function, except that
 * it will use at most n bytes from src; and
 * src does not need to be null-terminated if it contains n or more bytes
 * @dest: the destination string
 * @src: the src sting
 * @n: the number of bytes to copy from src to dest
 *
 * Return: pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	int x = 0;

	/* get the length of src*/
	while (src[i] != '\0')
		i++;

	/* get the length of dest*/
	while (dest[j] != '\0')
		j++;

	/*
    * append at most n bytes of src to dest
    * the x < i condition is to make sure we never
    * exceed the length of the src
    */
	while (x < n && x < i)
	{
		/* starting from dest[j] which will be the null byte of dest*/
		dest[j + x] = src[x];
		x++;
	}
	/* append a new null byte at the end of dest*/
	dest[j + x] = '\0';

	return (dest);
}
