#include "main.h"

/**
* _puts - function prints a string, followed by a new line
* @str: string to be printed
*
* Return: Void
*/
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
