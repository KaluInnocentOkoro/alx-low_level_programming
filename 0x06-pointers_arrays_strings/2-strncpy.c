#include "main.h"

/**
* _strncpy - function copies a string
* @dest: string to be copied into
* @src: string to be copied
* @n: numbsr of bytes to be copied
*
* Return: A pointer to dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
