#include "lists.h"
#include <string.h>

/**
* add_node_end - Function adds a new node at the end of a list_t list.
* @head: Head of the list
* @str: string to be duplicated
* Return: A pointer to the new element
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));
	unsigned int str_len = 0;
	list_t *temp = *head;

	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}

	while (*str)
	{
		str_len++;
		str++;
	}
	newNode->len = str_len;
	newNode->next = NULL;
	if (*head == NULL)
		*head = newNode;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newNode;
	}
	return (*head);
}
