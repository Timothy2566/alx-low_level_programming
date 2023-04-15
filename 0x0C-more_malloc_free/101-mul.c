#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * _is_zero - function that drtermines if the is zero
 * @argv: function parameter argument vector
 * Return: return nothing since is void
 */

void _is_zero(char *argv[])
{
	int t, num1 = 1, num2 = 1;

	for (t = 0; argv[1][t]; t++)
		if (argv[1][t] != '0')
		{
			num1 = 0;
			break;
		}

	for (t = 0; argv[2][t]; t++)
		if (argv[2][t] != '0')
		{
			num2 = 0;
			break;
		}

	if (num1 == 1 || num2 == 1)
	{
		printf("0\n");
		exit(0);
	}
}

/**
 * _iterate_array - function to set memory to zero in array
 * @tim: charater array
 * @joe: secon function parameter
 * Return: Return pointer of a char array upon success
 */
char *_iterate_array(char *tim, int joe)
{
	int t = 0;

	for (t = 0; t < joe; t++)
		tim[t] = '0';
	tim[joe] = '\0';
	return (tim);
}


/**
 * _checknums - function determines the lenght of number
 * @argv: function parameter agument vector
 * @m: the number of row array
 * Return: lenght of the number input
 */

int _checknum(char *argv[], int m)
{
	int d;

	for (d = 0; argv[m][d]; d++)
		if (!isdigit(argv[m][d]))
		{
			printf("Error\n");
			exit(98);
		}

	return (d);
}

/**
 * main - function main
 * @argc: agument count
 * @argv: argument vector
 * Return: always 0 upon success
 */

int main(int argc, char *argv[])
{
	int d1, d2, dout, add1, add2, i, j, k, ba;
	char *mout;

	if (argc != 3)
		printf("Error\n"), exit(98);
	d1 = _checknum(argv, 1), d2 = _checknum(argv, 2);
	_is_zero(argv), dout = d1 + d2, mout = malloc(dout + 1);
	if (mout == NULL)
		printf("Error\n"), exit(98);
	mout = _iterate_array(mout, dout);
	k = dout - 1, i = d1 - 1, j = d2 - 1, ba = add2 = 0;
	for (; k >= 0; k--, i--)
	{
		if (i < 0)
		{
			if (add2 > 0)
			{
				add1 = (mout[k] - '0') + add2;
				if (add1 > 9)
					mout[k - 1] = (add1 / 10) + '0';
				mout[k] = (add1 % 10) + '0';
			}
			i = d1 - 1, j--, add2 = 0, ba++, k = dout - (1 + ba);
		}
		if (j < 0)
		{
			if (mout[0] != '0')
				break;
			dout--;
			free(mout), mout = malloc(dout - 1), mout = _iterate_array(mout, dout);
			k = dout - 1, i = d1 - 1, j = d2 - 1, ba = add2 = 0;
		}
		if (j >= 0)
		{
			add1 = ((argv[1][i] - '0') * (argv[2][j] - '0')) + (mout[k] - '0') + add2;
			add2 = add1 / 10, mout[k] = (add1 % 10) + '0';
		}
	}
	printf("%s\n", mout);
	return (0);
}
