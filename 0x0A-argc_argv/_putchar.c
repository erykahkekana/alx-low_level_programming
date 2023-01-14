#include <stdio.h>
#include "main.h"

/**
 * _putchar - write char to stdout
 * @c: char
 * Return: On success 1
 * Error -1 is returned and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

