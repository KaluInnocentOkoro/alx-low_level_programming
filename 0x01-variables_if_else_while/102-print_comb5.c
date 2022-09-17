#include <stdlib.h>
#include <stdio.h>

/**
* main - program prints possible combinations of two two-digit numbers
* The two numbers should be separated by a space
* All numbers should be printed with two digits. 1 should be printed as 01
* The combination of numbers must be separated by comma, followed by a space
* The combinations of numbers should be printed in ascending order
* 00 01 and 01 00 are considered as the same combination of the numbers 0 and 1
*
* Return: 0 Always
*/
int main(void)
{
	int i, j;

	for (i = 0; i <= 98; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
			if (i / 10 != 9 || i % 10 != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
