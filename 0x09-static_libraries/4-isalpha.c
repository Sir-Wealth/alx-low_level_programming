#include "main.h"
/**
 * _isalpha - checks for alphabetic character.
 * @c: is a peremeter
 * Return: 0 or 1
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}
