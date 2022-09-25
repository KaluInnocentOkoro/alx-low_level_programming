#include "main.h"

/**
* reverse_array - function reverses the content of an array of integers.
* @a: The array to be reversed
* @n: Number of elements on the array
* Return: Void
*/
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
