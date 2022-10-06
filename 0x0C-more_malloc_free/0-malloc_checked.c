#include "main.h"

/**
* malloc_checked - Function allocates memory using malloc.
* @b: size of memory to be allocated
* Return: A pointer to the allocated memory on if successful
* Otherwise, exit with status 98
*/
void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);
	if (mem == NULL)
		exit(98);
	return (mem);
}
