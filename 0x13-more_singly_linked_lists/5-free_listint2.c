#include "lists.h"

/**
* free_listint2 - Function frees a list
* @head: A pointer to a pointer tobthe start of the node
* Return: Void
*/
void free_listint2(listint_t **head)
{
	listint_t *temp = *head;

	while (*head != NULL)
	{
		temp = *head->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
