#include "main.h"
/**
 * _strcmp - compare string values
 * @c1: input value
 * @c2: input value
 *
 * Return: c1[i] - c2[i]
 */
int _strcmp(char *c1, char *c2)
{
	int i;

	i = 0;
	while (c1[i] != '\0' && c2[i] != '\0')
	{
		if (c1[i] != c2[i])
		{
			return (c1[i] - c2[i]);
		}
		i++;
	}
	return (0);
}
