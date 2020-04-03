/* Program 1.6 Comparison of two integers 

   - we return a negative number (-1) if the first number is less than the second.
   - we return a 0 if the two numbers are equal.
   - we return a positive number(1) if the first number is greater than the second.  */

// function version
int compare (int x, int y)
{ /* compare x and y, return -1 for less than, 0 for equal, 1 for greater */
    if (x < y) return -1;
    else if (x == y) return 0;
        else return 1;
}

// macro version
#define COMPARE(x, y) (((x) < (y) ? -1 : ((x) == (y)) ? 0 : 1))
