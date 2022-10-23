#include "lists.h"

/**
* free_list - Function frees a list_t list.
* @head: A pointer to the start of the list
* Return: Nothing
*/
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
