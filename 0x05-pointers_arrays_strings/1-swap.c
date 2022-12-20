#include "main.h"
/**
*swap_int - function that swaps the values of two integers
*@a: value to be swaapped
*@b: value to be swapped
*/
void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}

