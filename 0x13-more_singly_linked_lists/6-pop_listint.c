#include "lists.h"

/**
* pop_listint - Function deletes the head node of a listint_t linked list
* @head: A pointer to a pointer to the start of the linked list
* Return: The head node’s data (n).
*/
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int data;

	if (*head == NULL)
		return (0);
	if (temp == NULL)
		return (0);

	data = (*head)->n;
	*head = temp->next;
	free(temp);
	return (data);
}
