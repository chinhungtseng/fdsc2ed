/* Program 1.8 Recursive implementation of binary search */

#define COMPARE(x, y) (((x) < (y)) ? -1 : ((x) == (y)) ? 0 : 1)

int binsearch (int list[], int searchnum, int left, int right)
{ /* search list[0] <= list[1] <= ... <= list[n - 1] for searchnum.
     Return  its position if found. Otherwise return -1. */
    int middle;
    if (left <= right) {
        middle = (left + right) / 2;
        switch (COMPARE(list[middle], searchnum)) {
            case -1: return binsearch(list, searchnum, middle + 1, right);
            case 0 : return middle;
            case 1 : return binsearch(list, searchnum, left, middle - 1);
        }
    }
    return -1;
}
