#include "main.h"
/**
 * _islower - tests whether a character is a lower case or not.
 * @c: the number to be
 * Return: 1 if it is a lowercase letter, 0 if it is not a lowercase letter.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (0);
	else
		return(2);

}
