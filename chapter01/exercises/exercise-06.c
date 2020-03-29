/* Exercise 6
   Given n, a positive integer, determine if n is the sum its divisors, 
   that is, if n is the sum of all t such that 1 ≤ t < n and t divides n. */

#include <stdio.h>

int main (void) 
{
   void print_divisors (int n);
   int n;
   printf("Enter a numbers: ");
   scanf("%i", &n);

   print_divisors(n);
   return 0;
}

 void print_divisors (int n)
 {
    for (int i = 1; i <= n; ++i)
        if ((n % i) == 0)
            printf("%i ", i);
   printf("\n");
 }