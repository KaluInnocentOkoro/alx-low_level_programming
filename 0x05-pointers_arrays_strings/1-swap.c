#include "main.h"

/**
* swap_int - Function swaps the value of 2 integers
* @a: pointer to first integer
* @b: pointer to the second integer
*
* Return: Nothing
*/
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
