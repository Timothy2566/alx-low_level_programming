#include "main.h"

/**
 * rev_string: Function that reverses a string with pointer char
 * A good engineer thinks in reverse and asks himself
 * about the stylistic consequences of
 * the components and systems he proposes
 *
 * @s: function parameter to input string
 *
 * Return: void
 */

void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0;
	int i;

	while (s[counter] != '\0')
	counter++;
	for (i = 0; i < counter; i++)
	{
		counter--;
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev;
	}
}
