/* Exercise 3

   Given n Boolean variable x_1, ..., x_n, we wish to print all possible 
   combinations of truth values they can assume. For instance, if n = 2, 
   there are four possiblilities: <true, true>, <false, true>, <true, false>,
   and <false, false>. Write a C program to do this. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define MAX_NUM 10

int main (void) 
{
    int n;
    void boolean_table(int n);

    printf("Enter a number between 1 to 10: ");
    scanf("%i", &n);

    if (n > MAX_NUM & n <= 0) {
        fprintf(stderr, "Invalid number!, input number should be between 1 to 10\n");
        return EXIT_FAILURE;
    }

    boolean_table(n);
    return 0;
}

void boolean_table(int n)
{
    int i, j, div, rem;
    int combs = (int) pow(2, n);
    char string[100];

    for (i = 0; i < combs; ++i) {
        strcpy(string, "\0");
        div = i;
        for (j = n; j > 0 ; --j) {
            rem = div % 2;
            div /= 2;

            if (!rem)
                strcat(string, "TRUE ");
            else 
                strcat(string, "FALSE ");
        }
        printf("%s\n", string);
    }
}