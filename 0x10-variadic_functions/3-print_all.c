#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	unsigned int r;
	va_list args;
	char *s, *separ;

	va_start(args, format);

	separ = "";

	r = 0;
	while (format && format[r])
	{
		switch (format[r])
		{
			case 'c':
				printf("%s%c", separ,  va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separ, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separ, va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", separ, s);
				break;
			default:
				r++;
				continue;
		}
		separ = ", ";
		r++;
	}

	printf("\n");
	va_end(args);
}

