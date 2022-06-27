#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - creates a two dimensional array of ints
 * @width: width of the matrix
 * @height: height of the matrix
 *
 * Return: pointer to the created matrix (Success)
 * or NULL (Error)
 */
int **alloc_grid(int width, int height)
{
	int **tab, i, j;

	tab = malloc(sizeof(*tab) * height);
	if (width <= 0 || height <= 0 || tab == 0)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		tab[i] = malloc(sizeof(**tab) * width);
		if (tab[i] == 0)
		{
		/*Free everything if malloc fails*/
		while (i--)
			free(tab[i]);
		free(tab);
		return (NULL);
		}
		for (j = 0; j < width; j++)
			tab[i][j] = 0;
	}
	return (tab);
}
