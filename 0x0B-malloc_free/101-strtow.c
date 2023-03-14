#include <stdlib.h>
#include "main.h"
/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 * Return: number of words
 **/
int count_word(char *s)
{
	int flag, i, j;

	flag = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] == ' ')
		{
			flag = 0;
		}
		else if (flag == 0)
		{
			flag = 1;
			j++;
		}
		i++;
	}
	return (j);	
}

/**
 * **strtow - splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int i = 0, j = 0, l = 0, c = 0, words, b, e;

	while (*(str + l))
	{
		l++;
	}
	words = count_word(str);	
	if (words == 0)
	{
		return (NULL);
	}
	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
	{
		return (NULL);
	}	
	while (i <= l;)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				e = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
				{
					return (NULL);
				}
				while (b < e)
				{
					*tmp++ = str[b++];
				}
				*tmp = '\0';
				matrix[j] = tmp - c;
				j++;
				c = 0;
			}
		}
		else if (c++ == 0)
		{
			b = i;
		}
		i++;
	}
	matrix[j] = NULL;
	return (matrix);
}
