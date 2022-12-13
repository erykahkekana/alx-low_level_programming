#include "main.h"

/**
 * print_sign - sing of number
 * @n: int to be checked
 * Return:  1 and print +if n greater than zero
 * 0 and print - if n less than zero
 * -1 print - if n less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar(48);
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
	}
		return (-1);
}

