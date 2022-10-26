#include "lists.h"

/**
* listint_len - Function that returns the number of nodes in listint_t list.
* @h: A pointer to the first node of the list
* Return: Count of nodes in the list
*/
size_t listint_len(const listint_t *h)
{
	const listint_t *temp = h;
	size_t count = 0;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
