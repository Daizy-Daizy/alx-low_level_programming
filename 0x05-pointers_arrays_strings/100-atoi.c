#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: Pointer to the string to convert.
 *
 * Return: The integer value of the string.
 */
int _atoi(char *s)
{
	int sign = 1, value = 0;

	/* Skip all non-digit characters at the beginning of the string */
	while (*s != '\0' && (*s < '0' || *s > '9'))
	{
	if (*s == '-')
	sign = -sign;
	s++;
	}

	/* Convert the digits to an integer value */
	while (*s >= '0' && *s <= '9')
	{
	value = value * 10 + (*s - '0');
	s++;
	}

	return (sign * value);
}
