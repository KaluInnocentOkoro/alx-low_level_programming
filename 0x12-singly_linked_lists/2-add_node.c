#include "lists.h"
#include <string.h>

/**
* add_node - Function adds a new node at the end of a list_t list.
* @head: Pointer to a pointer to the head of the list
* @str: string to be duplicated
* Return: address of the new element
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));
	int str_len = 0;

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
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
