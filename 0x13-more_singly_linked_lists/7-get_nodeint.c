#include "lists.h"

/**
* get_nodeint_at_index - Function returns the nth node of a linked list
* @head: A pointer to the start of the list
* @index: index of the node
* Return: The nth node or or NULL if does not exist
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int idx;

	for (idx = 0; idx < index; idx++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
