#include "dog.h"

/**
* free_dog - Function frees a dog structure
* @d: The dig structure to be fred
* Return: Void
*/
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
