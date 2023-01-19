#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_numbers(const char *separator, const unsigned int n, ...){
	va_list(printnums);
	unsigned int i;

	va_start(printnums, n);

	for (i = 0; i < n; i++)
	{
		printf("%s\n" va_arg(printnums, int);

		if (separator != NULL)
		printf("%s", separator);
	}
	print("\n");

	va_end(printnums);
}
