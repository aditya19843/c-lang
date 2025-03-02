#include <stdio.h>

int main() {
    float km, meters, feet, inches, cm;

    // Taking input from the user
    printf("\nEnter the distance between two cities in kilometers: ");
    scanf("%f", &km);

    // Conversion calculations
    meters = km * 1000;
    feet = meters * 3.28084;
    inches = feet * 12;
    cm = km * 100000;

    // Displaying the converted values
    printf("\nDistance in different units:\n");
    printf("Meters: %.2f m\n", meters);
    printf("Feet: %.2f ft\n", feet);
    printf("Inches: %.2f in\n", inches);
    printf("Centimeters: %.2f cm\n", cm);

    return 0;
}

