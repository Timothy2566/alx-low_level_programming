#include "main.h"
/**
 * create_file - function that Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
 */
int create_file(const char *filename, char *text_content)
{
	int age, t, size = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		size = 0;
		while (text_content[size])
			size++;
	}
	age = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	t = write(age, text_content, size);

	if (age == -1 || t == -1)
		return (-1);
	close(age);
	return (1);
}
