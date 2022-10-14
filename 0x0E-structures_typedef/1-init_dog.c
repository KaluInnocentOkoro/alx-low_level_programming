#include "dog.h"

/**
* init_dog - A function that initialize a variable of type struct dog
* @d: The dog structure
* @name: dog name
* @age: dog age
* @owner: dog owner
*
* Return: Void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
