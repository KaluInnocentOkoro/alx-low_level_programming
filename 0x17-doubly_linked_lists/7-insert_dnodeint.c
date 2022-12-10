#include "lists.h"

/**
* insert_dnodeint_at_index - inserts a new node at a given position.
* @h: a pointer to a pointer to the start of the list
* @idx: index of the list where the new node should be added
* @n: element to be inserted
* Return: the address of the new node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *ptr = *h;
	dlistint_t *newNode = NULL;
	dlistint_t *node = NULL;
	unsigned int i, len = 0;

	while (ptr)
	{
		len++;
		ptr = ptr->next;
	}
	if (idx > len)
		return (NULL);
	if (idx == 0)
	{
		node = add_dnodeint(h, n);
		return (node);
	}

	if (idx == len)
	{
		node = add_dnodeint_end(h, n);
		return (node);
	}

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;

	for (i = 0; i < idx - 1; i++)
		temp = temp->next;

	newNode->next = temp->next;
	newNode->prev = temp;
	temp->next->prev = newNode;
	temp->next = newNode;
	return (newNode);
}
