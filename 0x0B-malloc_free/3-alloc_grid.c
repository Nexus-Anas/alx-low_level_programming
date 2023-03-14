#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int x, y;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	p = malloc(sizeof(int *) * height);
	if (p == NULL)
	{
		return (NULL);
	}
	x = 0;
	while (x < height)
	{
		p[x] = malloc(sizeof(int) * width);
		if (p[x] == NULL)
		{
			for (; x >= 0; x--)
			{
				free(p[x]);
			}
			free(p);
			return (NULL);
		}
		x++;
	}
	x = 0;
	y = 0;
	while (x < height)
	{
		while (y < width)
		{
			p[x][y] = 0;
			y++;
		}
		x++;
	}
	return (p);
}
