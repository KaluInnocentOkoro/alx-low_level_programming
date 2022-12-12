#include "main.h"

/**
* _strlen - function returns the length of a string
* @s: string whose length us to be returned
*
* Return: length of the string, s
*/
int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}
	return (len);
}
