#include "dog.h"

/**
* new_dog - Function creates a new dog.
* @name: dog name
* @age: dog age
* @owner: dog owner
* Return: return the new dog struct or NULL on failure
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = malloc(sizeof(char) * str_len(name) + 1);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->name = str_cpy(d->name, name);
	d->owner = malloc(sizeof(char) * str_len(owner) + 1);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	d->owner = str_cpy(d->owner, owner);
	d->age = age;

	return (d);
}
/**
* str_len - function finds the length od a string
* @str: string whose length is to be checked
* Return: The length of the string
*/
int str_len(char *str)
{
	int len = 0;

	if (*str)
	{
		len++;
		str++;
	}
	return (len);
}
/**
* str_cpy - function copies a string
* @s1: string to be copied into
* @s2: string to copy from
* Return: a pointer to s1
*/
char *str_cpy(char *s1, char *s2)
{
	int i;

	for (i = 0; s2[i]; i++)
		*(s1 + i) = *(s2 + i);
	*(s1 + i) = '\0';
	return (s1);
}
