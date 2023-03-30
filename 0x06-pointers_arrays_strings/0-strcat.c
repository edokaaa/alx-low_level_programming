#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 * This function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte
 * @dest: the destination string
 * @src: the src sting
 *
 * Return: pointer to the resulting string dest
*/
char *_strcat(char *dest, char *src)
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

	/* append src to dest*/

	while (src[x] != '\0')
	{
		/* starting from dest[j] which will be the null byte of dest*/
		dest[j + x] = src[x];
		x++;
	}
	/* append a new null byte at the end of dest*/
	dest[j + x] = '\0';

	return (dest);
}
