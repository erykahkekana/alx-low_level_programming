#include <stdlib.h>
#include "dog.h"

void free_dog(dog_t *dog)
{
	if(d)
	{
		free((*d).owner);
		free((*d).name);
		free(d);
	}
}
