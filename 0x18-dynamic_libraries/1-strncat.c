#include "main.h"

/**
 *_strncat - function
 *
 *@dest: Destiny
 *@src: source
 *Return: Destiny
 */
/**----------------hello------world--1||1024*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int r = 0;

	for (; dest [tam];)
	{
		tam++;
	}
	while (r < n && src[r])
	{
		dest[tam + i] = src[r];
		i++
		r++;
	}
	return (dest);
}
