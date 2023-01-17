#include "main.h"

/**
 * _isdigit - looks for lowercase characters.
 * @c: character recibo por main.
 * Return: 1 if c is uppercase character
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
