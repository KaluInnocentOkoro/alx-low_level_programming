#include "main.h"

/**
* print_array - Function prints n elements of an array of integers,
* followed by a new line.
* @a: array to be printed
* @n: where n is the number of elements of the array to be printed
* Numbers must be separated by comma,
* followed by a space
* The numbers should be displayed in the same order
* as they are stored in the array
*
* Return: Nothing
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
			printf("%d", *(a + i));
		else
			printf("%d, ", *(a + i));
	}
	printf("\n");
}
