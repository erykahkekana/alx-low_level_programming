#include "main.h"

/**
 * _strcat - function for concatenating strings
 * @dest: pointer
 * @src: append to dest
 * return: pointer to @dest
 */
char *_strcat(char *dest, char *src)
{
	int idx = 0, dest_len = 0;

	while (dest[idx++])
		dest_len++;

	for (idx = 0; src[index];index++)
		dest[dest_len++] = src[idx];

	return (dest);
}

