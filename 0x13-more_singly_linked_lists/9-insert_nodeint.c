#include "lists.h"
#include <stdio.h>
/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @head: double pointer to head
 * @index: insert node at this index, starting count at 0
 * @n: value to store in node
 * Return: Address of new node or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *new;
	listint_t *current;
	unsigned int count;

	if (head == NULL)
		return (NULL);

	current = *head;
	for (count = 1; current && count < index; count++)
	{
		current = current->next;
		if (current == NULL)
			return (NULL);
	}

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;

	if (index == 0)
	{
		*head = new;
		new->next = current;
	}
	else if (current->next)
	{
		new->next = current->next;
		current->next = new;
	}
	else
	{
		new->next = NULL;
		current->next = new;
	}

	return (new);
}
