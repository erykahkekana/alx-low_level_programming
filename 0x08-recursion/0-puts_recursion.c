#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - fuction prints string followed by new line
 *@s: input
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion("string");
	}
	else
		_putchar('\n');
		return (0);
}

