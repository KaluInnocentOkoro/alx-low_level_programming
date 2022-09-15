#include "main.h"

/**
* print_diagonal - function that draws a diagonal line on the terminal.
* @n: n is the number of times the character \ should be printed
*
* Return: Nothing
*/
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= i; j++)
			{
				if (j == i)
					_putchar(92);
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
