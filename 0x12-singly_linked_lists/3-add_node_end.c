#include "lists.h"
#include <string.h>

/**
 * add_node_end - Adds a new node at the end
 * of a list_t list.
 * @head: A point
 * @str: The string.
 *
 * Return: If the Otherwise - the address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	int l;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	for ( l = 0; str[l];)
		l++;

	new->str = dup;
	new->l = l;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
