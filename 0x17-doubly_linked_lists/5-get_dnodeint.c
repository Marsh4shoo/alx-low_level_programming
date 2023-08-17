#include "lists.h"

/**
 * get_dnodeint_at_index - return nth node all dlistint_t linked list.
 * @head: pointer from head of the list
 * @index: index node to search for, starting from 0
 * Return: nth Node or Null
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
