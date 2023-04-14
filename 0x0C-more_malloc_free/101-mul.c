#include "main.h"

/**
 * find_len - function to find the lenght of the string
 * @tim: the measured string
 * Return: the atring lenght
 */
int find_len(char *tim)
{
	int len_t = 0;

	while (*tim++)
		len_t++;

	return (len_t);
}

/**
 * create_xarray - function to create an array of chars and initializes
 * @size_a: size of array in bytes
 * Return: pointer to array
 */
char *create_xarray(int size_a)
{
	char *array_t;
	int index_t;

	array_t = malloc(sizeof(char) * size_a);

	if (array_t == NULL)
		exit(98);

	index_t = 0;
	while (index_t < (size_a - 1))
	{
		array_t[index_t] = 'x';
		index_t++;
	}

	array_t[index_t] = '\0';

	return (array_t);
}

/**
 * iterate_zeroes - function to iterates through a string of number
 * @tim: first function parameter
 * Return: the non-zero element
 */
char *iterate_zeroes(char *tim)
{
	while (*tim && *tim == '0')
		tim++;
	return (tim);
}

/**
 * get_digit - function that converts a digit character to int
 * @d: the first function parameter
 * Return: return integer value
 */

int get_digit(char d)
{
	int digits = d - '0';

	if (digits < 0 || digits > 9)
	{
		printf("Error\n");
		exit(98);
	}

	return (digits);
}

/**
 * get_prod - function multiplies a string of numbers
 * @prod: the function parameter to store the buffer
 * @multi: the string of numbers
 * @digits: singular digit
 * @zeroes: numbers of leading zero
 * Return: return nothing
 */
void get_prod(char *prod, char *multi, int digits, int zeroes)
{
	int multi_len, num, tens = 0;

	multi_len = find_len(multi) - 1;
	multi += multi_len;

	while (*prod)
	{
		*prod = 'x';
		prod++;
	}

	prod--;

	while (zeroes--)
	{
		*prod = '0';
		prod--;
	}

	for (; multi_len >= 0; multi_len--, multi--, prod--)
	{
		if (*multi < '0' || *multi > '9')
		{
			printf("Error\n");
			exit(98);
		}

		num = (*multi - '0') * digits;
		num += tens;
		*prod = (num % 10) + '0';
		tens = num / 10;
	}
	if (tens)
	       *prod = (tens % 10) + '0';
}

/**
 * add_nums -  function that add numbers
 * @final_prod:  the first parameter storing buffer
 * @next_prod: the buffer storing the final prod
 * @next_len: next_grind lenght
 * Return: nothing
 */
void add_nums(char *final_prod, char *next_prod, int next_len)
{
	int num1, tens = 0;

	while (*(final_prod + 1))
		final_prod++;

	while (*(next_prod++ + 1))
		next_prod++;

	for (; *final_prod != 'x'; final_prod --)
	{
		num1 = (*final_prod - '0') + (*next_prod - '0');
		num1 += tens;
		*final_prod = (num1 % 10) + '0';
		tens = num1 / 10;

		next_prod--;
		next_len--;
	}

	if (tens)
		*final_prod = (tens % 10) + '0';
}

/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	char *final_prod, *next_prod;
	int size_a, index_t, digits, zeroes = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (*(argv[1]) == '0')
		argv[1] = iterate_zeroes(argv[1]);

	if (*(argv[2]) == '0')
		argv[2] = iterate_zeroes(argv[2]);

	if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
	{
		printf("0\n");
		return (0);
	}

	size_a = find_len(argv[1]) + find_len(argv[2]);
	final_prod = create_xarray(size_a + 1);
	next_prod = create_xarray(size_a + 1);

	for (index_t = find_len(argv[2]) - 1; index_t >= 0; index_t--)
	{
		digits = get_digit(*(argv[2] + index_t));
		get_prod(next_prod, argv[1], digits, zeroes++);
		add_nums(final_prod, next_prod, size_a - 1);
	}

	for (index_t = 0; final_prod[index_t]; index_t++)
	{
		if (final_prod[index_t] != 'x')
			_putchar(final_prod[index_t]);
	}

	_putchar('\n');

	free(next_prod);
	free(final_prod);

	return (0);
}
