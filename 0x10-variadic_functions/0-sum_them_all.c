#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: the number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: Always 0(Success).
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int r, summ = 0;

	va_start(ap, n);

	for (r = 0; r < n; r++)
		summ += va_arg(ap, int);

	va_end(ap);

	return (summ);
}
