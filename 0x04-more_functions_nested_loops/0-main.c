#include "main.h"
#include <stdio.h>

/**
 * _isupper - check the code got ALX SE students.
 * @c: Character input
 * Return: Always 0.
 */
int main(void)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
}
