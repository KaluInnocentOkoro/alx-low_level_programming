#include "lists.h"

/**
* free_listint - Function frees a listint_t list.
* @head: A pointer to the start of the node
* Return: Void
*/
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
