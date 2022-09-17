#include <stdlib.h>
#include <stdio.h>

/**
* main - program prints the first 50 Fibonacci numbers, starting with 1 and 2, followed by a new line.
*
* Return: 0 always
*/
int main(void)
{
	long f1 = 1, f2 = 2, fn;
	int i;

	printf("%lu, %lu, ", f1, f2);
	for (i = 3; i <= 50; i++)
	{
		fn = f1 + f2;
		if (i == 50)
			printf("%lu\n", fn);
		else
			printf("%lu, ", fn);
		f1 = f2;
		f2 = fn;
	}
	return (0);
}
