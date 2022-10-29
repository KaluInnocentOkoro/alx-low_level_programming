#include "lists.h"

/**
* insert_nodeint_at_index - Function inserts a new node at a given index
* @head: A pointer to a pointer to the start of the list
* @index: position to insert new node
* @n: data to be inserted
* Return: address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	unsigned int i;
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	for (i = 0; i < idx; i++)
	{
		if (temp == NULL || temp->next == NULL)
			return (NULL);
		temp = temp->next;
	}
	newNode->next = temp->next;
	temp->next = newNode;
	return (newNode);
}
