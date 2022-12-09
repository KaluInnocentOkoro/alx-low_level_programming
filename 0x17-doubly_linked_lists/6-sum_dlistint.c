#include "lists.h"

/**
* sum_dlistint - returns the sum of all the data (n) of a dlistint_t linked list
* @head: A pointer to the start of the list
* Return: sum of the data in the list
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head)
	{
		while (head != NULL)
		{
			sum = sum + head->n;
			head = head->next;
		}
		return (sum);
	}
	return (0);
}
