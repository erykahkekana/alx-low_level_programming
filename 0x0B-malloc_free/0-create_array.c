#include <stdlib.h>
#include "main.h"

/**
 * create_array -function creates array of chars and initializes it with a specific char
 * @c: char
 * @size: array size
 * Return: NULL if size = 0, pointer to array or NULL if fail
 */ 

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
