#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

size_t print_list(const list_t *h)
{
	size_t s;

	for (s = 0; h; s++)
	{
	printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (a);
}