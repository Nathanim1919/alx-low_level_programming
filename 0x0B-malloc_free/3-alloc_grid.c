#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid - returns a pointer to a 2 dimensional *array of integers.
 * @width: width
 * @height: height
 * Return: returns a pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (height <= 0 || width <= 0)
		return (NULL);

	array = malloc(sizeof(int) * height * width);

	if (!array)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
			array[i + height + j] = 0;
	}
	return (array);
}
