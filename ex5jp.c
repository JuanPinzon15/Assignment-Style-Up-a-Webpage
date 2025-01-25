#include <stdio.h>
#include <math.h>

int main() {
    double x;

    printf("Enter a value for x: ");
    scanf("%lf", &x);

    double result = 3 * pow(x, 5) + 2 * pow(x, 4) - 5 * pow(x, 3) - pow(x, 2) + 7 * x - 6;

    printf("The value of the polynomial is: %.2f\n", result);

    return 0;
}
