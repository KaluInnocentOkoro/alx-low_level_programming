#include "main.h"

/**
* _print_rev_recursion - Function recursively prints a string in reverse
* @s: string to be printed
* Return: Void
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\0');
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
