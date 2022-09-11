#include <stdlib.h>
#include <stdio.h>

/**
* main - main program
*
* Return: 0
*/
int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		putchar(i);
		if (i == 57)
		{
			i = 97;
			while (i <= 102)
			{
				putchar(i);
				i++;
			}
			break;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
