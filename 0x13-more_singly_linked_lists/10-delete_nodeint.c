#include "lists.h"

/**
* delete_nodeint_at_index - Function delete node at index of a listint_t linked list
* @head: A pointer to a pointer to the start of the list
* @index: Position of the node to be deleted
* Return: 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp1, *temp = *head;
	if (*head == NULL)
	{
		free(*head);
		return (-1);
	}

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		if (temp == NULL || temp->next == NULL)
			return (-1);
		temp = temp->next;
	}
	temp1 = temp->next;
	temp->next = temp1->next;
	free(temp1);
	return (1);

}
