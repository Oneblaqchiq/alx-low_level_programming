#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints everything
 * @format: format string
*/

void print_all(const char * const format, ...)
{
	unsigned int iter = 0;
	char *str;
	char *separator = "";
	va_list args;

	va_start(args, format);

	if (format)
	{
		while (format[iter])
		{
			switch (format[iter])
			{
				case 'c':
					printf("%s%c", separator, va_arg(args, int));
					break;
				case 'i':
					printf("%s%i", separator, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(args, double));
					break;
				case 's':
					str = va_arg(args, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", separator, str);
					break;
				default:
					iter++;
					continue;
			}
			separator = ", ";
			iter++;
		}
	}
	printf("\n");
	va_end(args);
}
