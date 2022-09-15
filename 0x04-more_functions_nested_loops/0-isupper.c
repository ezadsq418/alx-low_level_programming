#include "main.h"
#include <stdio.h>

/**
 * _isupper - Checks for lowercase character
 *
 * @c: Number to be checked
 *
 * Return: 1 (Success) OR 0 (Failure)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
