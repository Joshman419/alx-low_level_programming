#include <stdio.h>
/**
 * main- Entry point
 * Return: return 0 if no error and none zero if there is error
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
