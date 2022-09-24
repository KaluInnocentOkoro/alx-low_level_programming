#include "main.h"

/**
* _strcat - function concatenates two strings.
* This function appends the src string to the dest string,
* overwriting the terminating null byte (\0) at the end of dest,
* and then adds a terminating null byte.
* @dest: string to be appended to
* @src: string to be appended
*
* Return: A pointer to the resulting string dest
*/
char *_strcat(char *dest, char *src)
{
	int i, j;

	if (dest && src)
	{
		for (i = 0; dest[i]; i++)
		{

		}
		for (j = 0; src[j]; j++)
		{
			dest[i++] = src[j];
		}
		dest[i] = '\0';
	}
	return (dest);
}
