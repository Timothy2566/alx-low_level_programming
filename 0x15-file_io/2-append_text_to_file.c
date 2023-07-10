#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a files
 * @filename: first function parameter
 * @text_content: second function parameter
 *
 * Return: the necessary output when successful
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int pletters;
	int rewre;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		for (pletters = 0; text_content[pletters]; pletters++)
			;
		rewre = write(fd, text_content, pletters);
		if (rewre == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
