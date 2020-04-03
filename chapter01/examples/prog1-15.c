/* Program 1.15 Prgram 1.12 with count statements added */

float rsum(float list[], int n)
{
    count++; /* for if conditional */
    if (n) {
        count++; /* for return and rsum invcation */
        return rsum(list, n - 1) + list[n - 1];
    }
    count++;
    return list[0];
}