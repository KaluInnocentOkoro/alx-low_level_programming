#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point of program
*
* Return: 0
*/
int main(void)
{
	int i = 48;
	int j;

	for (i = 48; i < 57; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			putchar(i);
			putchar(j);
			if (i == 56 && j == 57)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
