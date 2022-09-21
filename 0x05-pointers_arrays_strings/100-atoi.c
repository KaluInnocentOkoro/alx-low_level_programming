#include "main.h"

/**
* atoi - function convert a string to an integer.
* The number in the string can be preceded by an infinite number of characters
* You need to take into account all the - and + signs before the number
* If there are no numbers in the string, the function must return 0
* You are not allowed to use long
* You are not allowed to declare new variables of “type” array
* You are not allowed to hard-code special values
* @s: string to be converted to integer
* Return: Returns the integer conversion of string
*/
int _atoi(char *s)
{
	int sign = 1;
	unsigned int n = 0;

	do
	{
		if (*s == '-')
			sign *= -1;
		else if (*s >= 48 && *s <= 57)
			n = (n * 10) + (*s - 48);
		else if (n > 0)
			break;
	}
	while (*s++);
	return (n * sign);
}
