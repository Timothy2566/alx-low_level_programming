#include "main.h"

/**
 * append_text_to_file - function appends text at the end of a file
 * @filename: first function parameter filename.
 * @text_content: second function parameter added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int age;
	int tim;
	int job;

	if (!filename)
		return (-1);
	age = open(filename, O_WRONLY | O_APPEND);

	if (age == -1)
		return (-1);

	if (text_content)
	{
		for (tim = 0; text_content[tim]; tim++)
			;
		job = write(age, text_content, tim);
		if (job == -1)
		return (-1);
	}
	close(age);
	return (1);
}
