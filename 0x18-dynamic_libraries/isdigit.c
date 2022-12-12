#include "main.h"

/**
* _isdigit - function checks for digits (0 -9)
* @c: digit to be checked
*
* Return: 1 if digit
* returns 0 otherwise
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
