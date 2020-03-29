/* Exercise 9
   Write an iterative function to compute a binomial coefficient, 
   then transform it into an equivalent recursive function. 
   
   https://en.wikipedia.org/wiki/Binomial_coefficient

   binomial coefficient formula
   
       C(n, k) = n! / k! * (n - k)!

   */

#include <stdio.h>

int binomial (int n, int k)
{
   int factorial (int n);
   //  C(n, k) = n! / k! * (n - k)!
   return  factorial(n) / (factorial(k) * factorial(n - k));
}

int factorial (int n)
{
   /* n! =
      n * (n - 1)! =
      n * (n - 1) * (n - 2)! = 
      ...
      ... */
   if (n <= 0)
       return 1;
   else 
       return n * factorial(n - 1);
}

int main (void)
{
   int n, k;
   int binomial (int n, int k);

   printf("C(n, k) = ");
   scanf("%i %i", &n, &k);

   printf("The result is %i\n", binomial(n, k));
   return 0;
}

