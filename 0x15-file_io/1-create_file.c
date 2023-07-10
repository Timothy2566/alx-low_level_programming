#include "main.h"
/**
 * create_file - function that creates a file in pro
 * @filename: first function parameter filename.
 * @text_content: second fucntion
 *
 * Return: upon success
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int pletters;
	int rewre;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (pletters = 0; text_content[pletters]; pletters++)
		;
	rewre = write(fd, text_content, pletters);
	if (rewre == -1)
		return (-1);
	close(fd);
	return (1);
}
