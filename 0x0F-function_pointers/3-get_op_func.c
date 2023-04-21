#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - selects the correct function
 * to perform the operation asked by the user.
 * @s: the operation selected by the user
 *
 * Return: pointer to the function
 * that corresponds to the operator given to the function
*/
int (*get_op_func(char *s))(int, int)
{

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < (int)(sizeof(ops) / sizeof(op_t)))
	{
		if (*(ops + i)->op == *s)
		{
			return (*(ops + i)->f);
		}
		i++;
	}
	return (NULL);
}
