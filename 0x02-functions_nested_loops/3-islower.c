#include "main.h"

/**
 * _islower - checks lowercase chars
 * @c: char to be checked
 * Returned: 1 if char lowercase, otherwise 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

