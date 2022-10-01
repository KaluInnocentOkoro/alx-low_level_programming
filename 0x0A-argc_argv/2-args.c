#include <stdlib.h>
#include <stdio.h>

/**
* main - program prints it's name
* @argc: Number of arguments passed to main
* @argv: Array of arguments passed to main
* Return: 0 Always
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
