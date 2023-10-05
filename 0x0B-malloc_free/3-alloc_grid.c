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
	int **array, i, j;

	array = malloc(sizeof(*array) * height);

	if (width <= 0 || height <= 0 || array == 0)
		return (NULL);

	else
	{
		for (i = 0; i < height; i++)
		{
			array[i] = malloc(sizeof(**array) * width);
			if (array[i] == 0)
			{
				/*Free everything if malloc fails*/
				while (i--)
					free(array[i]);
				free(array);
				return (NULL);
			}

			for (j = 0; j < width; j++)
				array[i][j] = 0;
		}
	}
	return (array);
}
