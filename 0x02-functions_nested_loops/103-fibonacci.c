#include <stdio.h>
#include <stdlib.h>

/**
* main - program that finds and prints the sum of
* the even-valued terms of a fibonacci series,
* followed by a new line.
*
* Return: 0 always
*/
int main(void)
{
	long f1 = 0, f2 = 1, fn, sum = 0;

	for (fn = 0; fn <= 4000000; fn = f1 + f2)
	{
		f1 = f2;
		f2 = fn;
		if (f1 % 2 == 0)
			sum += f1;

	}
	printf("%lu\n", sum);
	return (0);
}
