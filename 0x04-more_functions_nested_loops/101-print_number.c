#include "main.h"

/**
* print_number - function that prints an integer.
* @n: integer to be printed
*
* Return: Nothing
*/
void print_number(int n)
{
	int num, place_value = 1;
	int val;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}

	num = n;

	while (num / 10 != 0)
	{
		num = num / 10;
		place_value = place_value * 10;
	}

	while (place_value > 0)
	{
		val = n / place_value;
		_putchar((val) + '0');
		n = n - (val * place_value);
		place_value = place_value / 10;
	}
}
