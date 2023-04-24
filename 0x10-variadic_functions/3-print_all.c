#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>


/**
 * print_all - a function that prints anything
 * @format: a list of types of arguments passed to the function
 *
 * Return: nothing
*/
void print_all(const char * const format, ...)
{
	va_list my;
	unsigned int j, i;
	char *str;

	i = 0;
	while (format[i] != '\0')
		i++;
	va_start(my, format);
	j = 0;
	while (j < i)
	{
		switch (format[j++])
		{
			case 'c':
				printf("%c", va_arg(my, int));
				break;
			case 'i':
				printf("%i", va_arg(my, int));
				break;
			case 'f':
				printf("%f", va_arg(my, double));
				break;
			case 's':
				str = va_arg(my, char *);
				if (str == NULL || *str == '\0')
				{
					printf("(nil)");
					continue;
				}
				printf("%s", str);
			default:
				continue;
		}
		if (j != i)
			printf(", ");
	}
	printf("\n");
	va_end(my);
}
