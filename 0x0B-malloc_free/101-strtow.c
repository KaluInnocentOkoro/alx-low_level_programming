# include "main.h"

/**
* strtow - Function splits a string into words
* @str: string to be split
* Return: NULL if str == NULL or str == ""
* if function fail, should return NULL
*/
char **strtow(char *str)
{
	unsigned int i;
	char *ar;

	if (str == NULL || *str == "")
		return (NULL);
	for (i = 0; str[i]; i++)
		;
	ar = malloc(sizeof(char) * i + 1);
	if (ar == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
			continue;
		else
			ar[i] = str[i];
	}
	ar[i] = '\0';
	return (ar);
}
