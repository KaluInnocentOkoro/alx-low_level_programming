#include "lists.h"

/**
* print_listint - Function prints all the elements of a listint_t list.
* @h: Pointer to the start of the list
* Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	const listint_t *temp = h;
	size_t count = 0;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		count++;
		temp = temp->next;
	}
	return (count);
}
