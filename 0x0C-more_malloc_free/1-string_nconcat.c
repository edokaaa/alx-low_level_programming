#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenantes two string.
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes to concatenant from s2
 *
 * Return: pointer to the concatenated string,
 * or NULL on failure
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k;
	char *conc;

	/* get the length of s1, if s1 is NULL, treat as empty string */
	i = 0;
	if (s1 != NULL)
	{
		for (; s1[i] != '\0'; i++)
			;
	}
	/* we need memory for s1 and the first n bytes of s2*/
	/* so we don't need to get the length of s2 */
	i += n;

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
		for (; k < n; k++)
			*(conc + j + k) = s2[k];
	}
	*(conc + j + k) = '\0';
	return (conc);
}
