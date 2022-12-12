#include "main.h"

/**
* _strcpy - function copies the string pointed to by src,
* including the terminating null byte (\0), to the buffer pointed to by dest.
*
* @dest: buffer to be copied into
* @src: string to be copied
*
* Return: pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
