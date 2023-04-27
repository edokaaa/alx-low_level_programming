#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: seperator of the numbers
 * @n: number of parameters
 *
 * Return: nothing
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (i == 0 || separator == NULL)
			printf("%d", va_arg(ap, int));
		else
			printf("%s%d", separator, va_arg(ap, int));
	}
	printf("\n");
}

void print_char(char *c)
{
    printf("%c", c);
}
void print_int(char *c)
{
    printf("%i", c);
}
void print_float(char *c)
{
    printf("%f", c);
}
void print_str(char *c)
{
    printf("%s", c);
}

    char *v;
    char *fo;

    fo = "cifs";


    fmt ops[] = {
    {"c", print_char},
    {"i", print_int},
    {"f", print_float},
    {"s", print_str},
    {NULL, NULL}
};

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *id;
	void (*f)(char *);
} fmt;