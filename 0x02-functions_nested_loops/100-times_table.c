#include "main.h"

/**
* print_times_table - Function prints the n times table, starting with 0.
* @n: The number of times tables to be printed
*
* Return: Nothing
*/
void print_times_table(int n)
{
	int i, j, product;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');
				product = i * j;

				if (product <= 99)
				{
					_putchar(' ');
				}

				if (product <= 9)
				{
					_putchar(' ');
				}

				if (product >= 100)
				{
					_putchar((product / 100) + '0');
					_putchar((product / 10) % 10 +'0');
				}

				else if (product >= 10 && product <= 99)
				{
					_putchar((product / 10) + '0');
				}

				_putchar((product % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
