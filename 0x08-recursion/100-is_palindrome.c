#include "main.h"

/**
* is_palindrome - function checks if a given string is a palindrome
* @s: string to be checked
* Return: 1 if string is a palindrome, 0 otherwise
*/
int is_palindrome(char *s)
{
	int len = len_str(s);

	return (palindrome(s, (s + len - 1)));
}


/**
* palindrome - Function compares two strings
* @s1: 1st string to be compared
* @s2: 2nd string to be compared
* Return: 0 if no difference, 1 otherwise
*/
int palindrome(char *s1, char *s2)
{
	if (s1 >= s2)
		return (1);
	if (*s1 == *s2)
		return (palindrome((s1 + 1), (s2 - 1)));
	return (0);
}

/**
* len_str - function checks tge length of a string
* @s: string whose length is to be checked
* Return: length of the string or 0
*/
int len_str(char *s)
{
	if (*s == '\0')
		return (0);
	return (len_str((s + 1) + 1));
}
