#include <stdio.h>
/**program prints all arguments it recieves
 * one argument per line
 */
int main(int argc, char *argv[])
{
	int i;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
}
