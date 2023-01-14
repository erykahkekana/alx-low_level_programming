#include <stdio.h>
#include "main.h"

/*program prints name followed by a new line
 * @argc: int
 * @argv[]: char
 * Return: 0.
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
			
}
