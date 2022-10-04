#include "main.h"

/**
* _strdup - function returns a pointer to a newly allocated space in memory,
* which contains a copy of the string given as a parameter.
* @str: string to be duplicated
* Return: NULL if str = NULL
* On success, the _strdup returns a pointer to the duplicated string
* It returns NULL if insufficient memory was available
*/
char *_strdup(char *str)
{
	char *mystr;
	unsigned int i;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		;

	mystr = malloc(sizeof(char) * i + 1);
	if (mystr == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		*(mystr + i) = *(str + i);
	*(mystr + i) = '\0';
	return (mystr);
}
