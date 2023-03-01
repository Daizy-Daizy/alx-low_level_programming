#include "main.h"

/**
 * _strncpy - Copoes at most an inputted number
 * of bytes from string src into dest.
 * @dest: The buffer storing the string copy.
 * @src: The source of string.
 * @n: The maximum number of bytesto be copied from src.
 * Return: A pointer to the resulting string dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	dest[i] = src[i];
	for (; i < n; i++)
	dest[i] = '\0';

	return (dest);
}
