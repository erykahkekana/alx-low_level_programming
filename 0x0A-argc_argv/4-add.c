#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>


/**
 * check_num - program adds positive numbers
 * print result followed by new line
 * no number passed to program print 0 followed by new line
 * number contains symbols print error followed by new line return 1
 * integers
 * @str: array string
 *Return: Always 0 (Success)
 */

int main(int argc, char* argv[])
{
	int i, add = 0;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			add += atoi(argv[i]);
		}
			printf("%d\n", add);
	}
	else
	{
		printf("Error\n");
		return 1;
	}
	return 0;
}
