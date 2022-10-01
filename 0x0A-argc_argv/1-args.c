#include <stdlib.h>
#include <stdio.h>

/**
* main - prints the number of arguments passed into it.
* @argc: Number of arguments passed to the program
* @argv: List of arguments passed to the program
* Return: 0 Always
*/
int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", (argc - 1));
	return (0);
}
