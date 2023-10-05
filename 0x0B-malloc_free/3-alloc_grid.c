#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - this function that Returns a pointer
 *              to a 2-dimensional array of
 *               integers with each element initalized to 0.
 * @width: The width.
 * @height: The height.
 *
 * Return: If width <= 0, height <= 0, or the function fails - NULL.
 *         Otherwise - a pointer to the 2-dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
	int **p;
	int m, n;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = malloc(height * sizeof(int *));

	if (p == NULL)
		return (NULL);

	for (m = 0; m < height; m++)
	{
		p[m] = malloc(width * (sizeof(int)));
		if (p[m] == NULL)
		{
			for (n = 0; n < m; n++)
			{
				free(p[n]);
			}

			free(p);
			return (NULL);
		}
		for (n = 0; n < width; m++)
			p[m][n] = 0;
	}

	return (p);
}
