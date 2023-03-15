#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Function that returns a pointer
 * to a 2 dimensional array of integers.
 * @width: Width input.
 * @height: Height input.
 *
 * Return: The function should return NULL on failure.
 * If width or height is 0 or negative, return NULL
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (height <= 0 || width  <= 0)
	{
		return (NULL);
	}

	arr = (int **)malloc(sizeof(int *) * height);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		arr[i] = (int *)malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(arr[j]);
			}
			free(arr);
			return (NULL);
		}
		for (j = 0; i < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
