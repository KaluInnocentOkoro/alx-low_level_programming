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
	int len = 0;
	int i = 0;

while (str[len++])
		;
	while (i < len)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
