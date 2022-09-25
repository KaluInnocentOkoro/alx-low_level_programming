#include "main.h"

/**
* cap_string - function capitalizes all words of a string
* @str: string whose are to be cspitalized
* Return: pointer to thevstring
*/
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if ((i == 0) && (str[i] >= 97 && str[i] <= 122))
			str[i] = str[i] - 32;
		if (str[i] == ',' || str[i] == ';'
				|| str[i] == '.'
				|| str[i] == '!'
				|| str[i] == '?'
				|| str[i] == '"'
				|| str[i] == '('
				|| str[i] == ')'
				|| str[i] == '{'
				|| str[i] == '}'
				|| str[i] == ' '
				|| str[i] == '\t'
				|| str[i] == '\n'
		   )
			if (str[i + 1] >= 97
					&& str[i + 1] <= 122)
				str[i + 1] = str[i + 1] - 32;
	}
	return (str);
}
