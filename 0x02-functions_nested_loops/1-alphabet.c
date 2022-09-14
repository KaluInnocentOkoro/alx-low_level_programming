#include "main.h"

/**
* print_alphabet - function pribts alphabets in lower case
*
* Return: Returns Nothing
*/
void print_alphabet(void)
{
	int i = 97;

	while (i <= 122)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
