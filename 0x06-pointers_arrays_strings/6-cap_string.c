#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string.
 * Separators of words include:
 * space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }
 * @c: the string
 *
 * Return: pointer to the capitalizes strings.
*/
char *cap_string(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] == '\t')
			c[i] = ' ';
		if ((i == 0 || (c[i - 1] >= ' ' && c[i - 1] <= '.')
				|| c[i - 1] == '\n' || c[i - 1] == ';' || c[i - 1] == '?'
				|| c[i - 1] == '{' || c[i - 1] == '}')
			&& c[i] >= 97 && c[i] <= 122)
			c[i] -= 32;
	}

	return (c);
}
