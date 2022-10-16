#include "variadic_functions.h"

/**
* sum_them_all - Function returns the sum of all its parameters.
* @n: 1st parameter passed to the function
* Return: The sum of all its parameters
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum = 0;
	va_start(args, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(args, unsigned int);
	va_end(args);
	return (sum);
}
