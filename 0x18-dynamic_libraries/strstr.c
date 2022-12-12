#include "main.h"

/**
* _strstr - function locates a substring.
* @haystack: The to be searched
* @needle: string to be matched
*
* Return: A pointer to the beginning of the located substring,
* or NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	while (*h)
	{
		h = haystack;
		n = needle;
		while (*n)
		{
			if (*h == *n)
			{
				h++;
				n++;
			}
			else
				break;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return (NULL);
}
