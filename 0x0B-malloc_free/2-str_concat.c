#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int i = 0, j = 0, size1, size2;

	for (size1 = 0; s1 && s1[size1]; size1++)
	{
		for (size2 = 0; s2 && s2[size2]; size2++)
		s3 = malloc(sizeof(char) * (size1 + size2 + 1));
	}
	if (s3 == NULL)
	{
		return (NULL);
	}
	if (s1)
	{
		for (i = 0; i < size1; i++)
			s3[i] = s1[i];
	}
	j = 0;
	if (s2)
	{
		while (i < (size1 + size2))
		{
			s3[i] = s2[j];
			i++;
			j++;
		}
	}
	s3[i] = '\0';

	return (s3);
}

