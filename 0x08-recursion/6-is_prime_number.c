#include "main.h"

/**
 * is_prime_number - function returns 1 if input is a prime number
 * actual_prime - calculate prime numbers using recursion 
 * @n: prime numbers ?
 * @i: iterator
 * Return: 1 0r 0.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual _prime(n, n - 1));
}

int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
