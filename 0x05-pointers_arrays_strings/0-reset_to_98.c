#include "main.h"
#include <stdio.h>

/**
 * main - function that takes a pointer to an int
 * pdates the value it points to to 98
 * @n: input
 * Return: n
 */
int main(void)
{
	int n = 1;

	int *ptn = &n;

	*ptn = 98;

		printf("n = %i\n", n);
}

