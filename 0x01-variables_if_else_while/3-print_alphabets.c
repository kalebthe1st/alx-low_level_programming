#include <stdio.h>

/**
 * main - prints out the alphabet in lowercase and then uppercase
 * Return: 0
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	ch = 'A';
	while (ch <= 'Z')
	{

		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
