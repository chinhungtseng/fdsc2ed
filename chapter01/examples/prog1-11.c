/* Program 1.11 Iterative function for summing a list of numbers
   
   We want to add a list of numbers. Althought th eoutput is a simple value, 
   the input include an array. Therefore, the variable space requirement depends on
   how the array is passed into the function.

   Programming languges like Pascal may pass arrays by value. This means that the 
   entire array is copied into temporary storage before the function is excuted. 
   In these languages the variable space requirement for theis program is 
   
       S_sum(I) = S_sum(n) = n, where n is the size of the array.

   C passes all parameters by value. When an array is passed as an argument to a
   function, C intepretes it as passing the address of the first element os the 
   array. C does not copy the array. Therefore,

      S_sum(n) = 0.
*/

float sum (float list[], int n)
{
    float tempsum  = 0;
    int i;
    for (i = 0; i < n; i++)
        tempsum += list[i];
    return tempsum;
}