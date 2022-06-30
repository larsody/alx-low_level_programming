#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * is_digit - checks for non-digit char
 * @s: string to be evaluate
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_digit(char *s)
{
	int a = 0;

	while (s[a])
	{
		if (s[a] < '0' || s[a] > '9')
			return (0);
		a++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}

/**
 * errors - handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies to numbers
 * @argv: array of args
 * @argc: numer of args
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int a, b, leng, leng1, leng2, c, dig1, dig2, *rs;

	a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	leng1 = _strlen(s1);
	leng2 = _strlen(s2);
	leng = leng1 + leng2 + 1;
	rs = malloc(sizeof(int) * leng);
	if (!rs)
		return (1);
	for (b = 0; b <= leng1 + leng2; b++)
		rs[b] = 0;
	for (leng1 = leng1 - 1; leng1 >= 0; leng1--)
	{
		dig1 = s1[leng1] - '0';
		c = 0;
		for (leng2 = _strlen(s2) - 1; leng2 >= 0; leng2--)
		{
			dig2 = s2[leng2] - '0';
			c += rs[leng1 + leng2 + 1] + (dig1 * dig2);
			rs[leng1 + leng2 + 1] = c % 10;
			c /= 10;
		}
		if (c > 0)
			rs[leng1 + leng2 + 1] += c;
	}
	for (b = 0; b < leng - 1; b++)
	{
		if (rs[b])
			a = 1;
		if (a)
			_putchar(rs[b] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(rs);
	return (0);
}
