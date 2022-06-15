#include <stdio.h>
// Converting Celsius to Farenheit

    int main() 
    
{
// assign celsius variable
    float celsius;
// assign fahrenheit variable
    float fahrenheit;
// Prompt user to enter a degree in celsius
    printf("Celsius: ");
// the & is used to store value given by user, to the celsius variable
    scanf("%f", &celsius);
// conversion equation
   fahrenheit = (1.8) * celsius + 32;
// return degree in farenheit
    printf("farenheit = %f", fahrenheit);
    
 
    
    return 0;
}