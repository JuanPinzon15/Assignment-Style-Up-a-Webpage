/*******************
 * FILENAME: exercise4jp.c

 * YOUR NAME: Juan Pinzon

 * DESCRIPTION: With this code we can ask the user to enter a certain amount and then displays the amount with 5% tax added.

*********************/
#include <stdio.h>

int main() {
    // Declare each variable
    double amount, tax, total;

    // Ask the user to enter the dollars and cents amount
    printf("Enter an amount: ");
    scanf("%lf", &amount);

    // Calculate the tax
    tax = amount * 0.05;

    // Calculate the total with tax added
    total = amount + tax;

    // Display the result
    printf("With tax added: $%.2f\n", total);

    return 0;
}
