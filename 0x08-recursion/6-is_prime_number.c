#include "main.h"

/**
* is_prime_number - Function checks if input number is a prime number
* @n: Number to be checked for prime
* Return: Returns 1 if input integer is prime, 0 otherwise
*/
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);
	if (n >= 2 && n <= 3)
		return (1);
	return (primer(n, div));
}

/**
* primer _ function checks for prime number
* @num: number to checked
* @div: The begining divisor
* Return: 1 if prime , 0 otherwise
*/
int primer(int num, int p)
{
	if (num % p == 0)
		return (0);
	if (p == num / 2)
		return (1);
	return (primer(num, p + 1));

}
