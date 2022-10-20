#include "main.h"
/**
 * is lower - check if a character is a lower case
 * @c: is the char to be checked
 * Return: return 1 if the char is lower cash and 0 if not lower case
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
