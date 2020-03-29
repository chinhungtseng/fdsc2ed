/* Exercise 2
   
   Horner's rule is a strategy for evaluating a polynomial A(x) = 

       a_n x^n + a_n-1 x^n-1 + ... + a_1 + a_0
    
    at point x_0 using a minimum number of multiplecations.
    This rule is: 

        A(X_0) = (... ((a_n x_0 + a_n-1) x_0 + ... + a_1) x_0 + a_0)

    Write a C program ot evaluate a polynomial using Horner's rule. */

#include <stdio.h>

int horner (int list[], int n, int x)
{
    int i, result = list[0];
    for (i = 1; i <= n; ++i)
        result = x * result + list[i];
    return result;
}

int main (void) 
{
    int horner (int list[], int n, int x);
    int array[] = {2, -6, 2, -1};
    int n = 3;
    int x = 3;

    printf("The result is %i\n", horner(array, n, x));
    return 0;
}