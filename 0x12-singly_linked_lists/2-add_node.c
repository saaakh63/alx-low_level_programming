#include "lists.h"
#include <string.h>

/**
 * add_node - Adds a new node at the beginnig
 * @head: A pointer
 * @str: The string
 *
 * Return: If the function fails - NULL.
 * Otherwise - the address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *dup_str;
	int l;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup_str = strdup(str);
	if (dup_str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (l = 0; str[l];)
		l++;

	new->str = dup_str;
	new->l = l;
	new->next = *head;

	*head = new;

	return (new);
}
