#include "lists.h"

/**
* add_nodeint - Function adds a new node at the beginning of a listint_t list.
* @head: A pointer to the start of the list
* @n: data to be added
* Return: The address of the new element, or NULL if it failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
