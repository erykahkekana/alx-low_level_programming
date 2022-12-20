#include "main.h"
#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0
 */
int main(void)
{
	int n = 1;

	int *ptn = &n;

	*ptn = 98;

		printf("n = %i\n", n);
	return (0);
}

