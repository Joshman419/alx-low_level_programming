#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main-Entry Point
 *
 * Return:0 if there is no error and non zero if there is error
 */
int main(void)
{
	int n;
	int ldigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ldigit = n % 10;
	if (ldigit > 5)
	{
		printf("ldigit of %d is %d and is greater than 5\n", n, ldigit);
	}
	else if (ldigit == 0)
	{
		printf("ldigit of %d is %d and is 0\n", n, ldigit);
	}
	else if (ldigit < 6 && ldigit != 0)
	{
		printf("ldigit of %d is %d and it less than 6 and not 0\n", n, ldigit);
	}
		return (0);
}
