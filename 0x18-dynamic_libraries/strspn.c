#include "main.h"

/**
* _strspn - gets the length of a prefix substring.
* @s: string containing 'accept'
* @accept: string to be searched for
*
* Return: Returns the number of bytes in the initial segment of s
* which consist only of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int j, len = 0;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == *(accept + j))
			{
				len++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (len);
		}
		s++;
	}
	return (len);
}
