#include "main.h"

/**
* _memcpy - function copies memory area.
* @dest: memory area to be copied into
* @src: memory area to copy from
* @n: number of bytes of src to be copied
*
* Return: Returns a pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
