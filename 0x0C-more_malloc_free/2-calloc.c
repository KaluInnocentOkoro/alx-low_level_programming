#include "main.h"

/**
* _calloc - Function allocates memory for an array, using malloc.
* @nmemb: number of elements
* @size: size of bytes
* Return: A pointer to the allocated memory
* If nmemb or size is 0, then _calloc returns NULL
* If malloc fails, then _calloc returns NULL
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ar;
	unsigned int i, len;

	if (nmemb == 0 || size == 0)
		return (NULL);
	len = nmemb * size;
	ar = malloc(len);
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		ar[i] = 0;
	return (ar);
}
