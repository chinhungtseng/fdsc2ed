/* Program 1.3 Swap function */

void swqp(int *x, int *y) {
    /* both parameters are pointers to ints */
    int temp = *x; /* declares temp as an int and assigns 
                      to it the contents of waht x points to */
    *x = *y; /* stores wht y points to into the location 
                where x points */
    *y = temp; /* places the contents of temp in location
                  pointed to by y */
}

/* passing to swap the addresses of a and b. 
   the macro versin is: */
#define SWAP(x, y, t) ((t) = (x), (x) = (y), (y) = (t))

/* The function's code is easier to read than that of the macro 
   but the macro works with any data type */
