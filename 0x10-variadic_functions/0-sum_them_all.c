#include "variadic_functions.h"
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...)
{
	va_list sumnum;
	unsigned int i, sum = 0;
	
	va_start(sumnum, n);

	for (i = 0; i < n; i++)
		sum += va_arg(sumnum, int);
	
	va_end(sumnum);
	return (sum);
}
