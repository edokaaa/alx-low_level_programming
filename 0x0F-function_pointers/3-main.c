#include "3-calc.h"
#include <stdio.h>

/**
 * main - main function
 * @argc: the argument count.
 * @argv: the array of arguments
 *
 * Return: 0
*/
int main(int argc, char *argv[])
{
	char *s;
	int a, b, d;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	s = argv[2];
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (*s == '/' || *s == '%' || *s == '*' || *s == '-' || *s == '+')
	{
		if ((*s == '/' || *s == '%') && b == 0)
		{
			printf("Error\n");
			exit(100);
		}
		d = get_op_func(s)(a, b);
		printf("%d\n", d);
		return (0);
	}
	printf("Error\n");
	exit(99);
}
