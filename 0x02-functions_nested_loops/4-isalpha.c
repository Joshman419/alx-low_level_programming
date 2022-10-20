#include "main.h"
/**
 * _isalpha - check for character alphabet
 * @c:the character to be checked
 * Return:if character is upper or lower case, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
