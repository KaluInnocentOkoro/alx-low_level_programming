#include "main.h"

/**
* _strcmp - function compares two strings
* @s1: first string to be compared
* @sw: 2nd string to be compared
*
* Return: 0 if the strings are same, -1 otherwise
*/
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i]; i++)
		if (s1[i] == '\0')
			return (0);
	return (s1[i] - s2[i]);
}
