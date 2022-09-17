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
	long f1 = 0, f2 = 1, fn = 0, sum = 0;

	while (fn <= 4000000)
	{
		fn = f1 + f2;
		if (fn % 2 == 0)
			sum += fn;
		f1 = f2;
		f2 = fn;

	}
	printf("%lu\n", sum);
	return (0);
}
