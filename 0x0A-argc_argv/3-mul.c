#include <stdlib.h>
#include <stdio.h>

/**
* main - program multiplies arguments passed to it
* @argc: Number of arguments passed to main
* @argv: Array of arguments passed to main
* Return: 0 Always
*/
int main(int argc, char *argv[])
{
	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	}
	return (0);
}
