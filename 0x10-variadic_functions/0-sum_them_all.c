#include <stdarg.h>
#include "variadic_functions.h"

int sum_them_all(const unsigned int n, ...)
{
	va_list sumnum;
	
	va_start(sumnum, n);

	int i = 0, sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(sumnum, int);
	
	va_end(sumnum);
	return sum;
}
