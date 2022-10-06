#include "main.h"

/**
* string_nconcat - Function concatenates two strings
* @s1: firstvstring to be concatenated
* @s2: second string
* n: number of bytes of s2 to be concatenated
* Return: A newly allocated space in memory, which contains s1,
* followed by the first n bytes of s2, and null terminated
* If the function fails, it should return NULL
* If n is greater or equal to the length of s2 then use the entire string s2
* if NULL is passed, treat it as an empty string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len1++;
	for (j = 0; s2[j]; j++)
		len2++;

	if (n >= len2)
		str = malloc(sizeof(*str) * (len1 + len2) + 1);
	else
		str = malloc(sizeof(*str) * (len1 + n) + 1);
	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		str[i] = s1[i];
	if (n >= len2)
		for (j = 0; s2[j]; j++)
			str[i++] = s2[j];
	else
		for (j = 0; j < n; j++)
			str[i++] = s2[j];
	str[i + 1] = '\0';

	return (str);
}
