#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: string printed between strings
 * @n: number of string arguments
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	register unsigned int iter;
	va_list args;

	va_start(args, n);
	for (iter = 0; iter < n; iter++)
	{
		char *str = va_arg(args, char *);

		if (!str)
			str = "(nil)";

		if (separator && iter != n - 1)
			printf("%s%s", str, separator);
		else
			printf("%s", str);
	}
	printf("\n");
	va_end(args);
}
