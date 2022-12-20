#include <stdio.h>
#include <string.h>
#include "main.h"

int _strlen(char *s);

int main(void)
{
	char *s = "My first string length.";
	int length = strlen(s);

	printf("length = %d\n", length);

	return (0);
}

int _strlen(char *s)
{
	int len = 0;
	while (str[len] != '\0')
		len++;

	return (len);
}

