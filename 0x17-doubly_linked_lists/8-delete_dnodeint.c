#include "lists.h"
/**
* node_count - function counts the no. of nodes in a linked list
* @head: A pointer to the start of the node
* Return: Count of nodes in the linked list
*/
size_t node_count(const dlistint_t *head)
{
	size_t count = 0;

	while (head)
	{
		count++;
		head = head->next;
	}
	return (count);
}

/**
* delete_dnodeint_at_index - deletes the node at index of a dlistint_t linked
* @head: A pointer to a pointer to the start of the list
* @index: position of the node to be deleted
* Return: 1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr = *head;
	unsigned int i;
	size_t len = node_count(*head);

	if (index >= len || *head == NULL || head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = ptr->next;
		if (ptr->next != NULL)
			(*head)->prev = NULL;
		free(ptr);
		return (1);
	}
	for (i = 0; ptr != NULL; i++)
	{
		if (i == index)
		{
			if (ptr->next != NULL)
				ptr->next->prev = ptr->prev;
			if (ptr->prev != NULL)
				ptr->prev->next = ptr->next;
			free(ptr);
			return (1);
		}
		ptr = ptr->next;
	}
	return (-1);
}
