#include <stdio.h>

int main() {
    int sub1, sub2, sub3, sub4, sub5, sum;
    float percentage;

    printf("Enter marks obtained in 5 subjects (out of 100)\n");

    printf("Subject 1: ");
    scanf("%d", &sub1);

    printf("Subject 2: ");
    scanf("%d", &sub2);

    printf("Subject 3: ");
    scanf("%d", &sub3);

    printf("Subject 4: ");
    scanf("%d", &sub4);

    printf("Subject 5: ");
    scanf("%d", &sub5);

    // Calculate sum and percentage
    sum = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = sum / 5.0;  // Ensure floating-point division

    // Output the results
    printf("\nAggregate Marks: %d\n", sum);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
