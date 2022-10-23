#include "lists.h"

/**
* print_list - Function prints all the elements of a list_t list.
* @h: a pointer to the head of list
* Return: number of nodes printed
*/
size_t print_list(const list_t *h)
{
	const list_t *temp = h;
	size_t count = 0;

	while (temp != NULL)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", temp->len, temp->str);
		count++;
		temp = temp->next;
	}
	return (count);
}
