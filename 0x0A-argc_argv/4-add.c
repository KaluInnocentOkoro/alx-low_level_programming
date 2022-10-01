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
	int i, num, sum = 0;

	if (argc == 1)
		printf("%d\n", 0);
	else
	{
		for (i = 1; i < argc; i++)
		{
			num = atoi(argv[i]);
			if (num)
				sum += num;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
