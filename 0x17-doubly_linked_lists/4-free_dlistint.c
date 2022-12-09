#include "lists.h"

/**
* free_dlistint - function frees a linked list
* @head: A pointer to the start of the list
* Return: Void
*/
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
