#include <stdio.h>

/**
 * main - Entry point for the codes
 *
 *Return - Always 0 (success)
 */
int main(void)
{
	char c;
	int i;
	long int ld;
	long long int lld;
	float f;

	printf("size of char:%lu byte(s)\n", sizeof(c));
	printf("size of an int:%lu byte(s)\n", sizeof(i));
	printf("size of long int:%lu byte(s)\n", sizeof(ld));
	printf("size of long long int:%lu byte(s)\n", sizeof(lld));
	printf("size of float:%lu byte(s)\n", sizeof(f));
	return(0);
