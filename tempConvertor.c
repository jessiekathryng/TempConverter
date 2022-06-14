#include <math.h>
#include <stdio.h>

int main(void)
{

 float degrees = get_float("Celcius: ");
    int fahrenheit = (degrees * 1.8) + 32;
    printf("Fahrenheit: %i\n", fahrenheit);

}