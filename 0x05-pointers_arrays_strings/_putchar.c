#include "main.h"
#include <unistd.h>

/**
* _putchar - function writes to sdtout
* @c: character to be written to stdout
* Return: 1 on success, -1 on failure
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
