#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    srand(time(NULL));
    int num;
    
    num= rand() - RAND_MAX / 3;
    
    num > 0 ? printf("%d is positive", num) :
    num < 0 ? printf("%d is negative", num) :
    printf("%d is zero", num);
    
    return 0;
}
