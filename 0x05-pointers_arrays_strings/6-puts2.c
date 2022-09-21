#include "main.h"

/**
* puts2 - function prints every other character of a string,
* starting with the first character, followed by a new line.
* @str: string to be printed
*
* Return: Void
*/
void puts2(char *str)
{
	int len;
	int i = 0;

	for (len = 0; str[len]; len++)
		if (len % 2 == 0)
			_putchar(str[len]);
	_putchar('\n');
}
