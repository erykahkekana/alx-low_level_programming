#include <stdio.h>

/**
 * main - print aphabet in reverse lower case
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'Z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

