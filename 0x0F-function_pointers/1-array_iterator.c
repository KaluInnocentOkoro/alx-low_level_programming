#include "function_pointers.h"

/**
* array_iterator - Function executes a function given as a parameter
* on each element of an array.
* @array: array of functions
* @size: size of the array
* @action: pointer to the required function
* Return: Void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
