#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_numbers(const char *separator, const unsigned int n, ...){
	va_list printnums;
	unsigned int index;

	va_start(printnums, n);

	for (index = 0; index < n; index++)
	{
		printf("%d\n" va_arg(printnums, int));

		if (index != (n - 1) && separator != NULL)
		printf("%s", separator);
	}
	print("\n");

	va_end(printnums);
}
