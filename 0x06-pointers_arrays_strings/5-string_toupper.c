#include "main.h"

/**
* string_toupper - function changes all lowercase letters of a string to uppercase
* @str: string whose letters are to be changed to uppercase
* Return: a pointer to the string
*/
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
	}
	return (str);
}
