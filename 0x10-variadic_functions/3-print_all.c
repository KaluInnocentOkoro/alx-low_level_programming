#include "variadic_functions.h"

/**
* print_int - Function prints an integer
* @arg: argument to be printed
* Return: Void
*/
void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
* print_char - function prints a character
* @arg: argument to be printed
* Return: Void
*/
void print_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

/**
* print_float - function prints a floating point number
* @arg: argument to print
* Return: Void
*/
void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

/**
* print_str - Function prints a string
* @arg: argument to be printed
* Return: Void
*/
void print_str(va_list arg)
{
	char *str;

	str = va_arg(arg, char*);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
/**
* print_all - Function prints anything      * @format: A list of types of arguments pass    ed to the function
* Return: Void
*/
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *sep = "";
	print printType[] = {
		{"i", print_int},
		{"f", print_float},
		{"c", print_char},
		{"s", print_str},
		{NULL, NULL}
	};

	va_start(args, format);

	while (format && *(format + i))
	{
		j = 0;
		while (j < 4)
		{
			if (*printType[j].form == *(format + i))
			{
				printf("%s", sep);
				printType[j].func(args);
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
