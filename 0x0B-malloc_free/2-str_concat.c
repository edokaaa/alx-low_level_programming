#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenantes two string.
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to the concatenated string,
 * or NULL on failure
*/
char *str_concat(char *s1, char *s2)
{
	int i, j, k;
	char *conc;

	/* get str length, if either s1 or s2 is NULL, treat as empty string */
	i = 0;
	if (s1 != NULL)
	{
		for (; s1[i] != '\0'; i++)
			;
	}
	if (s2 != NULL)
	{
		for (j = 0; s2[j] != '\0'; j++)
		{
			i++;
		}
	}
	/* allocate memory */
	conc = (char *)malloc((i * sizeof(char)) + 1);
	if (conc == NULL)
		return (NULL);

	/* concatenant string */
	j = 0;
	k = 0;

	if (s1 != NULL)
	{
		for (; s1[j] != '\0'; j++)
			*(conc + j) = s1[j];
	}
	if (s2 != NULL)
	{
		for (; s2[k] != '\0'; k++)
			*(conc + j + k) = s2[k];
	}
	*(conc + j + k) = '\0';
	return (conc);
}
