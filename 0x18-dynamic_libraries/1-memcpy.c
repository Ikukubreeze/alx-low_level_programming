#include "main.h"

/**
 * *_memcpy - copies memory area from src to dest
 * @dest: destination for the data
 * @src: source
 * @n: max bytes to be used
 * Return: dest
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0 ; i++, n--)
	{
		dest[i] = src[i];
	}

	return (dest);
}
