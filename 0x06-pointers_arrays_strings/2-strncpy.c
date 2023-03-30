#include "main.h"

/**
 * _strncpy - a function that copies a string.
 * this function works exactly like the default strncpy
 * from the standard library.
 * It copies at most n bytes of src to dest
 * @dest: the destination string
 * @src: the source string
 * @n: number of bytes to copy
 *
 * Return: Pointer to the dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* copy at most n bytes of src to dest */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	/* pad dest with null bytes if src < n*/
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
