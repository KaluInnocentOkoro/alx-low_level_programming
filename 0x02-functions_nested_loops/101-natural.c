#include "main.h"

/**
* main - prints the sum of multiples of 3 or 5 below 1024
* Return: 0
*/
int main(void)
{
	int sums = 0;
	int n;

	for (n = 0; n < 1024; n++)
		if ((n % 3 == 0) || (n % 5 == 0))
			sums += n;
	printf("%d\n", sums);
	return (0);
}
