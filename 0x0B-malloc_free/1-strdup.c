#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function returns pointer to newly allocated space in memory which contains copy of string given
 * @str: string
 * Return 0
 */
char *_strdup(char *str)
{
	char *mal;

	int i, j = 0;

	if (str == NULL)
		return (NULL);

	i = 0;
	 while (str[i] != '\0')
		 i++;

	 mal = malloc(sizeof(char) * (i + 1));

	 if (mal == NULL)
		 return (NULL);

	 for (j = 0; str[j]; j++)
		 mal[j] = str[j];

	 return (mal);
}
