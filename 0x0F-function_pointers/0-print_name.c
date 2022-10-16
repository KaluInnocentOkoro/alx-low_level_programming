#include "function_pointers.h"

/**
* print_name - Function prints a name
* @name: name to be printed
* @f: A function pointer
* Return: Void
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
