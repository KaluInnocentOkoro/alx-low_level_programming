#include "main.h"

/**
* times_table - function prints the 9 times table starting from 0
*
* Return: Nothing
*/
void times_table(void)
{
	int i, j, product;

	for (i = 0; i <= 9; i++)
	{
		_putchar(48);
		for (j = 1; j <= 9; j++)
		{
			_putchar(44);
			_putchar(32);
			product = i * j;
			if (product <= 9)
				_putchar(32);
			else
				_putchar((product / 10) + '0');
			_putchar((product % 10) + '0');
		}
		_putchar('\n');
	}
}
