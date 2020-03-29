/* Exercise 10
   Ackerman's function A(m, n) is defined as:
      
                 n + 1                , if m = 0
      A(m, n) =  A(m - 1, 1)          , if n = 0
                 A(m - 1, A(m, n - 1)), otherwise
    
    This function is studied because it grows very quickly 
    for small values of m and n.
    Write recursive and iterative version of this function. 
    
    From wiki: https://zh.wikipedia.org/wiki/阿克曼函數 */

#include <stdio.h>

int main (void)
{
   int m, n, ack (int m, int n);

   printf("Enter two unmbers A(m, n): ");
   scanf("%i %i", &m, &n);

   printf("The result is %i\n", ack(m, n));
   return 0;
}

int ack (int m, int n)
{
   int ans;
   if (m == 0)
       ans = n + 1;
   else if (n == 0)
       ans = ack(m - 1, 1);
   else
       ans = ack(m - 1, ack(m, n - 1));
   return ans;
}
