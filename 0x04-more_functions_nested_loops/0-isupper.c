#include "main.h"

/**
 * _isupper - checks if the letter is uppercase
 * @c: input character
 * Return: 1 if letter is upper case or 0 if not
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
