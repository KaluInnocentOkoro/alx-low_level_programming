#include "variadic_functions.h"

/**
* print_strings - Function prints strings, followed by a new line.
* @separator: is the string to be printed between the strings
* @n: is the number of strings passed to the function
* Return: Void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i != n - 1)
			if (separator != NULL)
				printf("%s", separator);
	}
	printf("\n");
}
