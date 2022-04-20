#include "main.h"
#include <stdio.h>
/**
 * _strlen - finds lenght of tring.
 * @s: pointer to a string.
 *
 * Return: the lenght of a string.
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i);
	return (i);
}
