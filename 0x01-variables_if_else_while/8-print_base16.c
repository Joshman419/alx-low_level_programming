#include <stdio.h>
/**
 * main- Entry Point
 * Return: 0 if no error and none zero if there is error
 */
int main(void)
{
	int i;
	char hexvalues[] = "0123456789abcdef";

	for (i = 0; i < 16; i++)
	{
		putchar(hexvalues[i]);
	}
	putchar('\n');
		return (0);
}