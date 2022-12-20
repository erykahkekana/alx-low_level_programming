#include <stdio.h>
#include <string.h>
#include "main.h"

int main(void)
{
	char *s = "My first string length.";
	int length = strlen(s);

	printf("length = %d\n", length);

	return (0);
}
