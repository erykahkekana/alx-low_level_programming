#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _atoi - program multiplies two numbers
 * print result followed by a new line
 * integers
 * print error if program doesnt receive two arguments followed by new li
 * @s: string to be converted
 * Return: 1
 */

int main(int argc, char *argv[])
{
	if (argc > 2)
	{
		int i, multiple = 1;
		for (i = 1; i < argc; i++)
		{	
			multiple *= atoi(argv[i]);
		}
			printf("answer = %d\n", multiple);
	}
	else
	{
		printf("error\n");
		return 1;
	}
	return 0;
}
