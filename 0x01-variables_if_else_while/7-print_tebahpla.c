#include <stdio.h>
#include <stdlib.h>

/**
* main - main program
*
* Return: 0
*/
int main(void)
{
	int i = 122;

	while (i >= 97)
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
