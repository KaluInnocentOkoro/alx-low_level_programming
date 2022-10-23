#include "lists.h"

/**
* list_len - Function returns the number of elements in a linked list_t list.
* @h: A pointer to the head node
* Return: Number of elements on the list
*/
size_t list_len(const list_t *h)
{
	const list_t *temp = h;
	size_t count = 0;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
