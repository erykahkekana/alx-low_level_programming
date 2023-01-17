#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	
		if ((*d).name == NULL)
			(*d).name = "(nil)";
		if ((*d).owner == NULL)
			(*d).owner = "(nil)";

		printf("name: %s\n", (*d).name);
		printf("age: %d\n", (*d).age);
		printf("owner: %s\n", (*d).owner);
	
}
