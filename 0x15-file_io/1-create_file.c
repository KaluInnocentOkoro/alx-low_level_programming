#include "main.h"

/**
* create_file - Function creates a file.
* @filename: Name of the file to be created
* @text_content: A NULL terminated string to write to the file
* Return: 1 on success, -1 on failure
* if the file already exists, truncate it
* if filename is NULL return -1
* if text_content is NULL create an empty file
*/
int create_file(const char *filename, char *text_content)
{
	int _open, _write, idx;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	_open = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (_open == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (idx = 0; text_content[idx]; idx++)
			;
		_write = write(_open, text_content, idx);
		if (_write == -1)
		{
			write(1, "fails", 6);
			return (-1);
		}

	}
	close(op);
	return (1);
}
