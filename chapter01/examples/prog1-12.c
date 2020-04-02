/* Program 1.12 Recursive function for summing a list of numbers.
   
   Space needed for one recursive:

   |-----------------------------------|--------|-----------------|
   | Type                              | Name   | Number of bytes |
   |-----------------------------------|--------|-----------------|
   | parameter: array pointer          | List[] | 4               |
   | parameter: integer                | n      | 4               |
   | return address: (used internally) |        | 4               |
   |-----------------------------------|--------|-----------------|
   | TOTAL per recursive call          |        | 12              |
   |-----------------------------------|--------|-----------------|

   If the array has n = MAX_SIZE numbers, the total variable space needed for the 
   recursive versino is 
       
       S_rsum(MAX_SIZE)  = 12 * MAX_SIZE.

    If MAX_SIZE = 1000, the variable space needed by the recursive versino is

       12 * 1000 = 12,000 bytes.

*/

float rsum(float list[], int n)
{
    if (n) return rsum(list, n - 1) + list[n - 1];
    return 0;
}