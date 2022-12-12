#include "main.h"

/**
* _strchr - function locates a character in a string.
* @s: String in which a character is to be located
* @c: character to be searched for
*
* Return: a pointer to the first occurrence of the character c in the string s,
* or NULL if the character is not found
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	return (NULL);
}
