#include "main.h"
/**
 * is lower - check if character is a lower case
 * @c :is the character to be checked if it is lower case
 * Return: return 1 if the char is lower case and 0 if not lower case
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
