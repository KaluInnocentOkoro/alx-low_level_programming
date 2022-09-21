#include "main.h"

/**
* puts_half - function prints half of a string, followed by a new line.
* The function should print the second half of the string
* If the number of characters is odd,
* the function should print the last n characters of the string,
* where n = (length_of_the_string - 1) / 2
*
* @str: string whose half is to be printed
* Return: Void
*/
void puts_half(char *str)
{
	int n, i, len;

	for (len = 0; str[len]; len++)
		;
	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len + 1) / 2;
	for (i = n; str[i]; i++)
		_putchar(*(str + i));
	_putchar('\n');
}
