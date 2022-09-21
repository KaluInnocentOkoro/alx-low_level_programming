#include "main.h"

/**
* print_rev - function prints a string in reverse by a new line
* @s: string to be printed
*
* Return: Void
*/
void print_rev(char *s)
{
	int len;

	for (len = 0; s[len]; len++)
		;
	while (len - 1 >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
