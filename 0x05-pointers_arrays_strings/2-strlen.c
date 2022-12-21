#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strlen - return length of string
 * @s - string return
 * return: Always 0 
 */
 
int _strlen(char *s)
{
	int len = 0;

	while (str[len] != '\0')
		len++;

	return (len);
}

