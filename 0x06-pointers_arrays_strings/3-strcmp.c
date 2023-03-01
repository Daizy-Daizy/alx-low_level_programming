#include "main.h"
/**
 * _strcmp - Compares pointers to two strings
 * @s1: A pointer to the first string to be compared.
 * S2: A pointer to the second string to be compared.
 * Return: If str1 < str2, the negative difference of
 * the first unmatched characters.
 * If str1 == str2, 0.
 * If str1 > str2, the positive difference of the first unmatched characters.
 */

char *_strcat(char *dest, char *src)
{
	int dest_len = 0, i;

	/* Find the length of the destination string */
	while (dest[dest_len] != '\0')
	dest_len++;
	/* Append the source string to the destination string */
	for (i = 0; src[i] != '\0'; i++)
	dest[dest_len + i] = src[i];

	/* Add the null terminating character to the end of the string */
	dest[dest_len + i] = '\0';

	/* Return a pointer to the resulting string */
	return (dest);
}
