#include "main.h"

/**
* _strncat - function concatenates two strings.
* The _strncat function is similar to the _strcat function, except that:
* it will use at most n bytes from src; and
* src does not need to be null-terminated if it contains n or more bytes
* @dest: string to be appended to
* @src: string to be appended
* @n: number of bytes from stc to be appended
*
* Return: a pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

		while (dest[i])
		{
			i++;
		}

		while (j < n && src[j])
		{
			dest[i] = src[j];
			i++;
			j++;
		}
		dest[i] = '\0';
	return (dest);
}
