#include "main.h"

/**
 * string_nconcat - function that concatenates two strings
 * @t1: first function parameter
 * @t2: second function parameter
 * @n: number of bytes
 *
 * Return: tee upon success
 */
char *string_nconcat(char *t1, char *t2, unsigned int n)
{
	unsigned int t = 0, u = 0, v = 0, w = 0;
	char *tee;

	if (t1 == NULL)
		t1 = "";
	if (t2 == NULL)
		t2 = "";

	while (t1[t])
		t++;

	while (t2[v])
		v++;

	if (n >= v)
		w = t + v;
	else
		w = t + n;

	tee = malloc(sizeof(char) * w + 1);
	if (tee == NULL)
		return (NULL);

	v = 0;
	while (u < w)
	{
		if (u <= t)
			tee[u] = t1[u];

		if (u >= t)
		{
			tee[u] = t2[v];
			v++;
		}
		u++;
	}
	tee[u] = '\0';

	return (tee);
}
