#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that adds positive numbers.
 * @argc: the argument count.
 * @argv: the array of arguments
 *
 * Return: 0 on success, 1 otherwise
*/
int main(int argc, char *argv[])
{
	int x, y, sum;

	sum = 0;
	for (x = 1; x < argc; x++)
	{
		y = 0;
		/* iterate through each character of the arguments */
		/* to make sure the argument are only numbers */
		while (argv[x][y] != '\0')
		{
			if (argv[x][y] < 48 || argv[x][y] > 57)
			{
				printf("Error\n");
				return (1);
			}
			y++;
		}
		sum += atoi(argv[x]);
	}
	printf("%d\n", sum);
	return (0);
}
