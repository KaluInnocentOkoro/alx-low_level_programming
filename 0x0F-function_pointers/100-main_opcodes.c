#include <stdio.h>
#include <stdlib.h>

/**
* main - program prints the opcode of itself
* @argc: number of arguments passed
* @argv: list of arguments passed
* Return: 0 Always
*/
int main(int argc, char *argv[])
{
	int i, arg;
	int (*fun)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	arg = atoi(argv[1]);
	if (arg < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < arg; i++)
	{
		opcode = *(unsigned char *)fun;
		printf("%.2x", opcode);
		if (arg - 1 == i)
			continue;
		printf(" ");
		fun++;
	}
	printf("\n");
	return (0);
}
