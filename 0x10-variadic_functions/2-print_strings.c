#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_strings(const char *separator, const unsigned int n, ...){
	va_list(printstr);
	int i;

	va_start(printstr, n);

	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(printstr, int);

		if (separator != NULL)
		printf("%s", separator);
		if (i == NULL)
		printf("%s", (nil));
	}
	printf("\n");

	va_end(printstr);
}
