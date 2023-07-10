#include "main.h"
/**
 * read_textfile - function that reads a text file
 * @filename: first function parameter filename.
 * @letters: second function numbers of letter
 *
 * Return:the necessary number output
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nord, newer;
	char *buffer;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);
	nord = read(fd, buffer, letters);
	newer = write(STDOUT_FILENO, buffer, nord);

	close(fd);
	free(buffer);
	return (newer);
}
