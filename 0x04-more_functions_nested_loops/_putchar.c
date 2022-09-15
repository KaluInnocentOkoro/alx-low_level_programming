#include <unistd.h>

/**
* _putchar - function writes a character to  stdout
* @c: character to be writen to stdout
*
* Return: 1 on success
* On error, -1 is returned, and errno isvset appropriately.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
