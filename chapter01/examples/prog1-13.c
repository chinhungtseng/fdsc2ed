/* Program 1.13 Program 1.11 with count statements */

float sum(float list[], int n)
{
    float tempsum = 0; count++; /* for assignment */
    int i;
    for (i = 0; i < n; i++) {
        count++; /* for the for loop */
        tempsum += list[i]; count++; /* for assignment */
    }
    count++; /* last excution of for */
    count++; /* for return */ return tempsum;
}