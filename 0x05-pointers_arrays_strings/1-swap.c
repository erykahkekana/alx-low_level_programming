#include "main.h"
/**
*swap_int - function that swaps the values of two integers
*@a: value to be swaapped
*@b: value to be swapped
*/
void swap_int(int *a, int *b)
{
	int a = 98;
	int b = 42;

	int *p = &a;
	*p = 42;

	int *p1 = &b;
	*p = 98;
}
