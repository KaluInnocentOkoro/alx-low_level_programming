#include "main.h"

/**
* str_concat - function concatenates two strings.
* @s1: first string foe concatenation
* @s2: second atring for concatenation
*
* Return: A pointer to the memory location of the concatenated string
* 	NULL on failure
*/
char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		;
	for (j = 0; s2[j]; j++)
		;
	str = malloc(sizeof(char) * (i + j + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		*(str + i) = *(s1 + i);
	for (j = 0; s2[j]; j++)
	{
		*(str + i) = *(s2 + j);
		i++;
	}
	*(str + i + 1) = '\0';
	return (str);
}
