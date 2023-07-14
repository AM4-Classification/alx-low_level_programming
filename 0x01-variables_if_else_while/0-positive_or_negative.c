#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Determines if a number is positive, negative or zero.
 *
 * Return: Always 0 (Success)
 */


int main() {
    srand(time(NULL));
    int num;
    num = rand() - RAND_MAX / 3;  // Variable declaration and assignment in one line

    if (num > 0) 
    {
        printf("%d is positive", num);
    } else if (num < 0) 
    {
        printf("%d is negative", num);
    } else 
    {
        printf("%d is zero", num);
    }

    return 0;
}
