#include "main.h"

/**
 * leet - a function that encodes a string into 1337.
 * Instructions:
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 * You can only use one if in your code
 * You can only use two loops in your code
 * You are not allowed to use switch
 * You are not allowed to use any ternary operation
 *
 * @str: pointer to the string.
 *
 * Return: a pointer to the encoded string.
*/
char *leet(char *str)
{
	int i, l;
	
	char l1[] = "aAeEoOtTlL";
	char l2[] = "4433007711";
	
	i = 0;
	while (str[i] != '\0')
	{
		for (l = 0; l1[l] != '\0'; l++)
		{
			if (str[i] == l1[l])
			{
				str[i] = l2[l];
				break;
			}
		}
		i++;
	}

	return (str);
}
