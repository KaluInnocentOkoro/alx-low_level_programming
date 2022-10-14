#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>


/**
* struct dog - defines a struct named dog
* @name: variable of type char
* @age: variable of type float
* @owner: variable of type char
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
