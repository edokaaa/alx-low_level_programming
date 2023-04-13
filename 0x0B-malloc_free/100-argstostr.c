#include "main.h"
#include <stdlib.h>

/**
 * argstostr - a function that concatenates all the arguments of the program.
 * @ac: argument count
 * @av: argument vector
 *
 * Return: on success - a pointer to a new string
 * NULL otherwise.
*/
char *argstostr(int ac, char **av)
{
	int i, j, k, length = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* get the length of all strings in av so as to malloc the needed memory*/
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			length++;
		}
	}
	/* allocate the required space, taking \n into consideration */
	/* adding + ac (args count) will make the space enough for \n */
	str = (char *)malloc((length * sizeof(char)) + ac);
	if (str == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		/* adding \n after each line */
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';
	return (str);
}
