#include "lists.h"

/**
* sum_listint - Function returns the sum of all the data (n) of a listint_t linked list.
* @head: A pointer to the head of the list
* Return: The sum of the elements of the list
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head)
	{
		while (head != NULL)
		{
			sum = sum  + head->n;
			head = head->next;
		}
		return (sum);
	}
	return (0);
}
