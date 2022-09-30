#include "main.h"

/**
* set_string - Function sets the value of a pointer to a char.
* @s: string pointer
* @to: char to be set
* Return: Nothing
*/
void set_string(char **s, char *to)
{
	*s = to;
}
