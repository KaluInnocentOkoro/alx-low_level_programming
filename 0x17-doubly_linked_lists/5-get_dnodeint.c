#include "lists.h"

/**
* get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
* @head: A pointer to the start of the Node
* @index: index is the index of the node, starting from 0
* Return: the nth node of a dlistint_t linked list or NULL
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int idx;

	if (head != NULL)
		for (idx = 0; idx <= index; idx++)
		{
			if (idx == index)
				return (head);
			head = head->next;
		}
	return (NULL);
}
