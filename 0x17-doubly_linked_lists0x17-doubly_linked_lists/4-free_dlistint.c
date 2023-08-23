#include "lists.h"

/**
 * free_dlistint - Free dlistint_t list.
 * @head: Pointer head of the list
 * Return: Nothing
 **/
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	return;

	while (head->next)
	{
	head = head->next;
	free(head->prev);
	}
	free(head);
}
