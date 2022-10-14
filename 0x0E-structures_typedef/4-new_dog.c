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
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * str_len(dig->name) + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->name = str_cpy(dog->bame, name);
	dog->owner = malloc(sizeof(char) * str_len(dog->owner) + 1);
	if (dog->owner == NULL)
	{
		free(dog->owner);
		free(dog);
		retirn (NULL);
	}
	dig->owner = str_cpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
/**
* str_len - function finds the length od a string
* @str: string whose length is to be checked
* Return: The length of tge string
*/
int str_len(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		;
	return (i);
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
		s1[i] = s2[i];
	s[i] = '\0';
	return (s1);
}
