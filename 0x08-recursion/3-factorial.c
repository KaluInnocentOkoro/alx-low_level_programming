#include "main.h"

/**
* factorial - function prints the factorial of a number recurssively
* @n: number whose factorial is to be returned
* Return: The factorial of a given number
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
