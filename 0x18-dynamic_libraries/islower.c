#include "main.h"

/**
* _islower - function checks for lower case character
* @c: character to be checked
*
* Return: 1 if lower case, 0 otherwise
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
