#include "main.h"

/**
 * _strcpy - a function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: pointer to the destination buffer
 * @src: pointer to the string to be copied
 *
 * Return: pointer to the dest
*/
char *_strcpy(char *dest, char *src)
{
	int i, j;

	/* get the length of the src */
	for (i = 0; src[i] != '\0'; i++)
		;

	/* copy each char of src to dest*/
	for (j = 0; j < i && src[j] != '\0'; j++)
		dest[j] = src[j];

	/* add the null terminating byte to dest*/
	dest[j] = '\0';

	return (dest);
}
