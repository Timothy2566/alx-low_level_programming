#include "main.h"

/**
 * argstostr - function that concatenates
 * @ac: first function parameter
 * @av: second function parameter
 * Return: tim upon success
 */

char *argstostr(int ac, char **av)
{
	int gb = 0, u = 0, v = 0, w = 0;
	char *tim;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (u < ac)
	{
		while (av[u][v])
		{
			gb++;
			v++;
		}

		v = 0;
		u++;
	}

	tim = malloc((sizeof(char) * gb) + ac + 1);

	u = 0;
	while (av[u])
	{
		while (av[u][v])
		{
			tim[w] = av[u][v];
			w++;
			v++;
		}

		tim[w] = '\n';

		v = 0;
		w++;
		u++;
	}

	w++;
	tim[w] = '\0';
	return (tim);
}
