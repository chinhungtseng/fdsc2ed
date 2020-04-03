/* Program 1.1 Allcation and deallocation of memory, revised version */

#include <stdio.h>
#include <stdlib.h>

/* Using macro definition */
#define MALLOC(p, s) \
    if (!((p) = malloc(s))) {\
        fprintf(stderr, "Insufficient memory"); \
        exit(EXIT_FAILURE);\
    }

int main (void)
{
    int   i, *pi;
    float f, *pf;

    MALLOC(pi, sizeof(int));
    MALLOC(pf, sizeof(float));

    *pi = 1024;
    *pf = 3.14;

    printf("an integer = %d, a float = %f\n", *pi, *pf);
    
    free(pi);
    free(pf);

    return 0;
}