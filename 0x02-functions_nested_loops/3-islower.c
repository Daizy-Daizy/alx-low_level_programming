#include "main.h"

/**
  * _islower - Shows 1 if the input is a
 * lowercase character. Another cases, shows
 * 0
 *
 * @c: The character in ASCII code
 *
 * Return: Outputs 1 if true. Outputs 0 if false.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')

	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
