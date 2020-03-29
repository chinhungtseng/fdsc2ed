/* Exercise 8
   The Fibonacci number are defined as: ƒ_0 = 0, ƒ_1 = 1, and ƒ_i = ƒ_i-1 + ƒ_i-2 for i > 1.
   Write a both a recursive and an iterative C function to compute ƒ_i. */

#include <stdio.h>
#include <stdlib.h>
#define MAX_NUM 100000

unsigned long long int fibonacci (int n)
{
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return n + fibonacci(n - 1);
    }
}

int main (void)
{
    int n;
    unsigned long long int result, fibonacci (int n);

    printf("Enter a number between 2 to 10000: ");
    scanf("%i", &n);
    
    if (n > MAX_NUM) {
        printf("Invalid number. Stop the program.\n");
        return EXIT_FAILURE;
    }

    result = fibonacci(n);
    printf("%llu\n", result);
    
    return 0;
}