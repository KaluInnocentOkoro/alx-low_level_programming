#include "main.h"

/**
* main - Entry point of program
* program prints "_putchar"
*
* Return: 0
*/
int main(void)
{
	char txt[] = "_putchar";
	int i = 0;

	while (i <= 7)
	{
		_putchar(txt[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
