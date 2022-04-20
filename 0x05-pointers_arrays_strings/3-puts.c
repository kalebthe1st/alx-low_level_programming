#include "main.h"
int _putchar(char c);
/**
 *_puts - prints string followed by newline.
 *@str: pointer to string.
 *
 *Return: void.
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	_putchar(str[i]);
	_putchar('\n');
}
