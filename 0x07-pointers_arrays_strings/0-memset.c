#include "main.h"

/**
* _memset - function fills memory with a constant byte.
* @s: memory to be filled
* @b: byte to fill
* @n: number of bytes of s to be filled
*
* Return: Returns a pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}
