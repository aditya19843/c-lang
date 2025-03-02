#include <stdio.h>

int main() {
    int amount, hundreds, fifties, tens, remaining;

    // Taking input from the user
    printf("\nEnter the amount to withdraw (in multiples of 100): ");
    scanf("%d", &amount);

    // Checking if the amount is valid (should be a multiple of 10)
    if (amount % 10 != 0) {
        printf("Invalid amount! Please enter an amount in multiples of 10.\n");
        return 1;
    }

    // Calculate number of 100-rupee notes
    hundreds = amount / 100;
    remaining = amount % 100;

    // Calculate number of 50-rupee notes
    fifties = remaining / 50;
    remaining = remaining % 50;

    // Calculate number of 10-rupee notes
    tens = remaining / 10;

    // Display results
    printf("\nCurrency Notes Distribution:\n");
    printf("100-rupee notes: %d\n", hundreds);
    printf("50-rupee notes: %d\n", fifties);
    printf("10-rupee notes: %d\n", tens);

    return 0;
}
