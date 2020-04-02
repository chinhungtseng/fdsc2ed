/* Exercise 7
   The factorial function n! has value 1 when n ≤ 1 and value n*(n-1)! when n > 1.
   Write both a recursive and an iterative C function to compute ƒi. */

#include <stdio.h>
#include <stdlib.h>
#define MAX_NUMBER 50

int main (void)
{
    int n;
    unsigned long long int result, factorial (int n);
    printf("Enter a number between 0 to 50: ");
    scanf("%i", &n);

    // Test if input number is greater than MAX_NUMBER 
    if (n > MAX_NUMBER) {
        fprintf(stderr, "Invalid number, input number MUST less than or equal to 50\n");
        return(EXIT_FAILURE);
    }

    result = factorial(n);
    printf("%llu\n", result);

    return 0;
}

unsigned long long int factorial (int n)
{
    if (n <= 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}