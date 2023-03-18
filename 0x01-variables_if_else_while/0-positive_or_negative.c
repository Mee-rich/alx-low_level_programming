#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/**
 * Main - A program that prints out a
 *
 * random positive or negative number
 *
 * This function returns 0 success
 */

int main(void)
{
	int n;
	     
	srand(time(0));
	n = rand() - RAND-MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);

	else if (n == 0)
		printf("%d is zero\n", n);

	else
		printf("%d is negative\n", n);

	return (0);
