#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"


/**
 * main - program prints number of arguments passed into it
 * @argc: int
 * @argv: string
 *Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}

