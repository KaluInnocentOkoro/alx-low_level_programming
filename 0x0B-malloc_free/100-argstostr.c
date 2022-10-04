#include "main.h"

/**
* argstostr - Function concatenates all the arguments of your program.
* @ac: Number of arguments passed to the program
* @av: list of arguments passed to the program
* Return: A pointer to the new string, or NULL if it fails
*/
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, idx = 0, len = ac;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j]; j++)
			len++;

	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			str[idx++] = av[i][j];
		str[idx++] = '\n';
	}
	str[len]  = '\0';
	return (str);
}
