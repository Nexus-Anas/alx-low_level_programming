#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, l = 0;
	char *c;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			l++;
		}
	}
	l += ac;
	c = malloc(sizeof(char) * l + 1);
	if (c == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			c[k] = av[i][j];
			k++;
		}
		if (c[k] == '\0')
		{
			c[k++] = '\n';
		}
	}
	return (c);
}
