#include "main.h"

/**
* rev_string - function reverses a string
* @s: string to be reversed
*
* Return: Void
*/
void rev_string(char *s)
{
	int i, j, len = 0;
	char k;

	while (s[++len])
		;
	j = len - 1;
	for (i = 0; i < len / 2; i++)
	{
		k = s[i];
		s[i] = s[j - i];
		s[j - i] = k;
	}
}
