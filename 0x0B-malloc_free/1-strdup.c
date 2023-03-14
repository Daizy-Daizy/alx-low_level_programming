#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates an array of chars and
 * initializes it with a specific char
 * @size: size of the array
 * @c: char to initialize the array with
 *
 * Return: NULL if size is 0 or if memory allocation fails,
 * otherwise pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *arr = malloc(size * sizeof(char));

	if (size == 0 || arr == NULL)

	return (NULL);

	for (unsigned int i = 0; i < size; i++)
	arr[i] = c;

	return (arr);
}

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string to copy
 *
 * Return: NULL if str is NULL or if memory allocation fails,
 * otherwise pointer to copied string
 */
char *_strdup(char *str)
{
	if (str == NULL)
	return (NULL);

	char *copy = malloc(sizeof(char));

	if (copy == NULL)

	return (NULL);

	unsigned int len = 0;

	while (str[len] != '\0')

	len++;

	copy = malloc((len + 1) * sizeof(char));
	if (copy == NULL)
	return (NULL);

	for (unsigned int i = 0; i <= len; i++)
	copy[i] = str[i];

	return (copy);
}

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *buffer = create_array(98, 'H');

	if  (buffer == NULL)

	{
	printf("failed to allocate memory\n");
	return (1);
	}
	printf("Array initialized with 'H':\n");
for (unsigned int i = 0; i < 98; i++)
	printf("%c", buffer[i]);
	printf("\n");
	free(buffer);

	char *s = _strdup("ALX SE");

	if (s == NULL)

	{
	printf("failed to allocate memory\n");
	return (1);
	}
	printf("Copied string: %s\n", s);
	free(s);

	return (0);
}
