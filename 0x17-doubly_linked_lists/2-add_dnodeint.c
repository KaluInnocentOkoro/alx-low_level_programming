#include "lists.h"

/**
* add_dnodeint - Function adds a new node at the beginning of a dlistint_t list.
* @head: A pointer to a pointer to the start of the linked list
* @n: element to be added
* Return: The address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	(*head)->prev = newNode;
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
