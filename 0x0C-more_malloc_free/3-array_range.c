#include "main.h"

/**
* array_range - Function creates an array of integers.
* @min: start of array
* @max: end of array
* Return: The pointer to the newly created array
* If min > max, return NULL
* If malloc fails, return NULL
*/
int *array_range(int min, int max)
{
	int *ar, i;

	if (min > max)
		return (NULL);
	ar = malloc(sizeof(*ar) * max);
	if (ar == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
		*(ar + i) = i;
	return (ar);
}
