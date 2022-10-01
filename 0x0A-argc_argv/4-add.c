#include <stdio.h>
#include <stdlib.h>

/**
* main - program adds positive numbers
* @argc: Number of arguments passed to the program
* @argv: program arguments
* Return: 0 Always
*/
int main(int argc, char **argv)
{
	int i, j, sum = 0;

	if (argc == 1)
		printf("%d\n", 0);
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j]; j++)
			{
				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
