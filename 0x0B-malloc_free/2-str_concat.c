#include "main.h"
/**
 * str_concat - function that concatenates two strings
 * @t1: first parameter string
 * @t2: second parameter string
 * Return:if NULL is passed, treat it as an empty string
 */
char *str_concat(char *t1, char *t2)
{
	int t = 0, j = 0, k = 0;
	int l = 0;
	char *tim;

	if (t1 == NULL)
		t1 = "";
	if (t2 == NULL)
		t2 = "";
	while (t1[t])
		t++;
	while (t2[j])
		j++;
	l = t + j;
	tim = malloc((sizeof(char) * l) + 1);
	if (tim == NULL)
		return (NULL);
	j = 0;
	while (k < l)
	{
		if (k <= t)
			tim[k] = t1[k];
		if (k >= t)
		{
			tim[k] = t2[j];
			j++;
		}
		k++;
	}
	tim[k] = '\0';
	return (tim);
}
