#include "main.h"
#include <stdlib.h>

/**
 * _strdup - clone of the strdup function
 * duplicates a string and return a pointer to it.
 * @str: string to be duplicated
 *
 * Return: pointer to the duplicate string,
 * or NULL if anything fails.
*/
char *_strdup(char *str)
{
	int i, j;
	char *dup;

	/* get str length */
	i = 0;
	for (i = 0; str[i] != '\0'; i++)
		;
	/* allocate memory */
	dup = (char *)malloc(i * sizeof(char));

	if (dup == NULL)
		return (NULL);

	/* duplicate string */
	for (j = 0; str[j] != '\0'; j++)
	{
		*(dup + j) = str[j];
	}

	/* return */
	return (dup);
}
