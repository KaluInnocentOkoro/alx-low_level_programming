#include "main.h"

char *alloc(char *filename);
void _close(int d);

/**
* alloc - function allocates memory
* @filename: the name of the file to be reserved a memory space for
* Return: Pointer to the newly allocated memory
*/
char *alloc(char *filename)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);
	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (buff);
}

/**
* _close - function closes a file
* @d: The file descriptor
* Return: Nothing
*/

void _close(int d)
{
	int cl = close(d);
	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", d);
		exit(100);
	}
}

/**
* main - function copies the content of a file to another file.
* @argc: Number of arguments to the program
* @argv: List of arguments passed to the program
* Return: 0 Always
*/
int main (int argc, char *argv[])
{
	int open1, open2, _read, _write;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = alloc(argv[2]);

	open1 = open(argv[1], O_RDONLY);
	_read = read(open1, buffer, 1024);
	open2 = open(argv[2], O_CREAT | O_RDONLY  | O_TRUNC, 0664);
	do
	{
		if (open1 = -1 || _read = -1)
		{
			dprintf(STDERR_FILENO,
	"Error: Can't read from file %s\n", argv[1]);
			free(mem);
			exit(98);
		}
		_write = write(open2, buffer, _read);
		if (open2 == -1 || _write == -1)
		{
			dprintf(STDERR_FILENO,
	"Error: Can't write to %s\n", argv[2]);
			free(mem);
			exit(99);
		}
		_read = read(open1, buffer, 1024);
		open2 = open(argv[2], O_WRONLY, O_APPEND);
	} while (_read > 0);
	free(buffer);
	_close(open1);
	_close(open2);
	return (0);
}
