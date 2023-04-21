#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a variadic function that sums up all its parameters
 * @n: the parameter count
 *
 * Returns: the sum of all the parameters.
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum;

	va_start (ap, n);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg (ap, int);
	va_end (ap);

	return (sum);

}
