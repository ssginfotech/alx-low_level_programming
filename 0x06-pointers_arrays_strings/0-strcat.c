#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination char
 * @src: source char
 * @n: number of bytes from src
 * Return: new string
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int n = 0;

	while (dest[n] != '\0')
	{
		n++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[n + i] = src[i];
	dest[n + i] = '\0';

	return (dest);
}
