#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: seperator for the printing
 * @n: the number off strings passed to the function
 *
 * Return: nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *current;

	va_start(ap, n);
	while (i < n)
	{
		current = va_arg(ap, char*);
		if (i != 0 && separator != NULL)
			printf("%s", separator);

		if (current == NULL)
			printf("nil");
		else
			printf("%s", current);

		i++;
	}
	printf("\n");
	va_end(ap);
}
