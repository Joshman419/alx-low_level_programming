#include <stdio.h>
/**
 * main - Entry Point
 * Return: return 0 if no error and none zero if there is an error
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
