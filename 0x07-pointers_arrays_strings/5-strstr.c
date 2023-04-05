#include "main.h"
#include <stdio.h>

/**
 * _strstr - a function that locates a substring.
 * @haystack: the entire string
 * @needle: the substring to find
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
	int i, j, found;
	char **h;

	h = &haystack;

	i = 0;
	found = 0;
	while (haystack[i] != '\0')
	{
		if (found)
		{
			printf("%d\n", i);
			return (*h + i - 1);
		}
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (needle[j] != '\0')
			{
				if (haystack[i + j] != needle[j])
				{
					break;
				}
				printf("found - %c\n", haystack[i + j]);
				found = 1;
				j++;
			}
		}
		i++;
	}
	return ('\0');
}
