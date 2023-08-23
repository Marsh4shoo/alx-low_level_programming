#include "lists.h"

/**
 * get_dnodeint_at_index - Return nth node of dlistint_t linked list.
 * @head: Pointer head of list
 * @index: index single node search for, starting from 0
 * Return: Nth node or null
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size;
	dlistint_t *tmp;

	size = 0;
	if (head == NULL)
	return (NULL);

	tmp = head;
	while (tmp)
	{
	if (index == size)
	return (tmp);
	size++;
	tmp = tmp->next;
	}
	return (NULL);
}
