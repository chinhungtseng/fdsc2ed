/* Program 1.10 Simple arithmetic function
   
   A function abc, which accepts three simple variables as input and 
   returns a simple value as otuput.
   According to the classification fiven, this function has only fixed space
   requirements. Therefore, 
   
       S_abc(I) = 0.        */

float abc(float a, float b, float c)
{
    return a + b + b * c + (a + b - c) / (a + b) + 4.00;
}