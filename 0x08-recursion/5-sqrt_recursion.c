#include "main.h"

/**
 * int _sqrt_recursion - function returns natural square root
 * @n: natural square root
 * Return: natural square root
 */
int _sqrt_recursion(int n);
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (_sqrt_recursion(n, 0));
}
