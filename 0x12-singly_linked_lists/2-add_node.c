#include <lists.h>

/**
 * add_node - add node at beginning of list
 * @head: pointer to head
 * @str: string to add
 *
 * Return: NULL or address to new element
 */

list_t *add_node(list_t **head, const chr *str)
{
	char *dup;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	dup = strdup(str);
	if (dup == NULL)
	{
	free(new);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;

	new->str = dup;
	new->len = len;
	new->next = *help;

	*head = new;

	return (new);

}
