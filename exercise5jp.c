/*******************
 * FILENAME: exercise5jp.c

 * YOUR NAME: Juan Pinzon

 * DESCRIPTION: With this code we can ask the user to enter a value for x and then displays the value of a polynomial.

*********************/
#include <stdio.h>
#include <math.h>

int main() {
    // Declare variable for x
    double x;
    
    // Ask the user for the x value
    printf("Enter a value for x: ");
    scanf("%lf", &x);
    
    // Calcuate the polynomial
    double result = 3 * pow(x, 5) + 2 * pow(x, 4) - 5 * pow(x, 3) - pow(x, 2) + 7 * x - 6;

    // The result
    printf("The value of the polynomial is: %.2f\n", result);

    return 0;
}
