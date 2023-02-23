#include "main.h"
/**
* _isupper - checks for uppercase character
* @i: Variable text
* Return: Always 0.
*/
int _isupper(int i)
{
	if (i >= 'A' && i <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
