#include "main.h"

/**
* leet - function encodes a string into 1337.
* Letters a and A should be replaced by 4
* Letters e and E should be replaced by 3
* Letters o and O should be replaced by 0
* Letters t and T should be replaced by 7
* Letters l and L should be replaced by 1
*
* @str: string to be encoded
* Return: a pointer to tge encoded string
*/
char *leet(char *str)
{
	int i, j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; str[i]; i++)
		for (j = 0; j < 10; j++)
			if ( str[i] == s1[j])
				str[i] = s2[j];
	return (str);
}
