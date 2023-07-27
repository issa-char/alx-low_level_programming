#include <lists.h>

/*
 * list_len - find no. of elements
 * @h: pointer to list
 *
 * Return: no. of elements
 */

size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
