#include <stdio.h>

int main() {
    double amount, tax, total;

    printf("Enter an amount: ");
    scanf("%lf", &amount);

    tax = amount * 0.05;

    total = amount + tax;

printf("With tax added: $%.2f\n", total);

    return 0;
}
