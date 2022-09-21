#include "main.h"

/**
* print_rev - function prints a string in reverse by a new line
* @s: string to be printed
*
* Return: Void
*/
void print_rev(char *s)
{
	int len, i;

	for (len = 0; s[len]; len++)
		;
	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
