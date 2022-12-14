#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - A array of list to be print
 * elements in the array of list
 * @h: pointer to the start of the list
 *
 * Return: the number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	const list_t *tmp;
	unsigned int i;

	tmp = h;
	for (i = 0; tmp; i++)
	{
		printf("[%u] %s\n", tmp->len, tmp->str);
		tmp =tmp->next;
	}
	return (i);
}
