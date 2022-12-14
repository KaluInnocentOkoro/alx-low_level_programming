#include "lists.h"

/**
* reverse_listint - Function reverses a listint_t linked list.
* @head: a pointer to a pointer to the start of the list
* Return: A pointer to the first node of the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevNode = NULL;
	listint_t  *nextNode;

	if (*head == NULL || head == NULL)
		return (NULL);
	while (*head != NULL)
	{
		nextNode = (*head)->next;
		(*head)->next = prevNode;
		prevNode = *head;
		*head = nextNode;
	}
	*head = prevNode;
	return (*head);
}
