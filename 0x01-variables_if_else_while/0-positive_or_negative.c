#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* Randomly generate numbers and test whether they are positive or negative
*/

int main(void)
{
	int num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	num > 0 ? printf("%d is positive", num) :
    	num < 0 ? printf("%d is negative", num) :
    	printf("%d is zero", num);
	
	return (0);
}
