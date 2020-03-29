/* Exercise 4
   
   Write a C program that prints out the integer 
   values of x, y, z in ascending order. */

#include <stdio.h>

void print_list (int *list, int n)
{
    int *end = list + n;
    for (; list < end; ++list) 
        printf("%i ", *list);
    printf("\n");
}

void swap (int *a, int *b)
{
    *a ^= *b;
    *b ^= *a;
    *a ^= *b;
}

void swap3 (int *a, int *b, int *c)
{
    void swap (int *a, int *b);

    if (*a > *b)
        swap(a, b);
    if (*a > *c)
        swap(a, c);
    if (*b > *c)
        swap(b, c);
}

int main (void)
{
    void print_list (int *list, int n);
    void swap3 (int *a, int *b, int *c);
    int aList[3];
    printf("Enter three numbers: ");
    scanf("%i %i %i", aList, aList + 1, aList + 2);

    swap3(aList, aList + 1, aList + 2);
    print_list(aList, 3);

    return 0;
}