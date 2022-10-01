#include <stdlib.h>
#include <stdio.h>

/**
* main - program prints its name, followed by a new line.
* @argc: The number of arguments passed to the program
* @argv: List of arguments passed to the function
* Return: 0 Always
*/
int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
