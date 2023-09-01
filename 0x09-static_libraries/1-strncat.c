
#include "main.h"

/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a;
	int z;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	z = 0;
	while (z < n && src[z] != '\0')
	{
	dest[a] = src[z];
	a++;
	z++;
	}
	dest[a] = '\0';
	return (dest);
}
