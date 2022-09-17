#include <stdio.h>
#include <stdlib.h>

/**
* main - program finds and prints the first 98 Fibonacci numbers,
* starting with 1 and 2, followed by a new line.
*
* Return: 0 always
*/
int main(void)
{
	long f1 = 1, f2 = 2, fn;
	int i;

	printf("%lu, %lu, ", f1, f2);
	for (i = 3; i <= 98; i++)
	{
		fn = f1 + f2;
		if (i == 98)
			printf("%lu\n", fn);
		else
			printf("%lu, ", fn);
		f1 = f2;
		f2 = fn;
	}
	return (0);
}
