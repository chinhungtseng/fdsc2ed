/* Exercise 12
   If S is a set of n elements the power set of S is the set of all possible subsets of S.
   For examle, if S = {a, b, c}, 
               then powerset(S)  = {{}, {a}, {b}, {c}, {a, b}, {a, c}, {b, c}, {a, b, c}}.
   Write a recursive function to compute powerset(S). */

#include <stdio.h>
#include <math.h>

void powerset (char *list, int n)
{
   unsigned int i, j, comb_num = pow(2, n);

   for (i = 0; i < comb_num; ++i) {
      for (j = 0; j < n; ++j)
         if (i & (1 << j)) 
            printf("%c", list[j]);
      printf("\n");
   }
}

int main (void)
{
   void powerset (char *list, int n);
   char aList[] = {'a', 'b', 'c'};

   powerset(aList, 3);
   return 0;
}