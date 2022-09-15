#include "main.h"

/**
* print_most_numbers - print numbers 0 - 9, skipping 2 and 4
*
* Return: Nothing
*/
void print_most_numbers(void)
{
	int i = 48;

	while (i <= 57)
	{
		if (i != 50 && i != 52)
			_putchar(i);
		i++;
	}
	_putchar('\n');
}
