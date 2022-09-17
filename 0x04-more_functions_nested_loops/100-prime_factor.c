#include "main.h"
/**
* main - program that finds and prints the largest prime factor
* of the number 612852475143, followed by a new line.
*
* Return: 0 always
*/
int main(void)
{
	long num  = 612852475143;
	long i, max, maxfact = 1;

	for (i = 2; i <= num / 2; i++)
	{
		if (num % i == 0)
		{
			if (is_prime(i))
			{
				max = i;
				if (max >= maxfact)
					maxfact = max;
			}
		}
	}
	printf("%lu\n", maxfact);
	return (0);
}

/**
* is_prime - function tests if a given number is prime
* @n: number to be checked
*
* Return: 1 if prime, 0 otherwise
*/
int is_prime(long n)
{
	int i;

	if (n <= 1)
		return (0);
	for (i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}
