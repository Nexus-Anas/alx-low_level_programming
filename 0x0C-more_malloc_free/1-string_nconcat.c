#include <stdlib.h>
#include "main.h"
/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: the string to append to
 * @s2: the string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int x = 0, y = 0;
	unsigned int l1 = 0, l2 = 0;

	while (s1 && s1[l1])
	{
		l1++;
	}
	while (s2 && s2[l2])
	{
		l2++;
	}
	if (n < l2)
	{
		s3 = malloc(sizeof(char) * (l1 + n + 1));
	}
	else
	{
		s3 = malloc(sizeof(char) * (l1 + l2 + 1));
	}
	if (!s3)
	{
		return (NULL);
	}
	while (x < l1)
	{
		s3[x] = s1[x];
		x++;
	}
	while (n < l2 && x < (l1 + n))
	{
		s3[x++] = s2[y++];
	}
	while (n >= l2 && x < (l1 + l2))
	{
		s3[x++] = s2[y++];
	}
	s3[x] = '\0';
	return (s3);
}
