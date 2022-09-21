#include "main.h"

/**
* print_array - Function prints n elements of an array of integers, followed by a new line.
* @n: where n is the number of elements of the array to be printed
* Numbers must be separated by comma, followed by a space
* The numbers should be displayed in the same order as they are stored in the array
*
* Return: Nothing
*/
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i == (n - 1))
			printf("%d\n", *(a + i));
		else
			printf("%d, ", *(a + i));
		i++;
	}
}
