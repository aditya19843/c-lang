/*If a number is input through the keyboard, write a program to print a new
number by adding one to each of its digits. For example if the number that is input is
12359 then the output should be displayed as 23460*/

/*Logic
   1.Take a number as input.
   2.Initialize a variable (new_num) to store the new number.
   3.Initialize a variable (place) to store the place value (starting from 1).
   4.Run a loop until the number is greater than 0:
   5.Extract the last digit of the number (digit = num % 10).
   6.Increment the digit by 1 (digit = (digit + 1) % 10), ensuring that 9 becomes 0.
   7.Multiply the updated digit with the place value and add it to new_num.
   8.Remove the last digit from the number (num = num / 10).
   9.Multiply the place value by 10 to shift to the next digit.
   10.Repeat steps 4 until the number becomes 0.
   11.Print the new number.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char num[100];  // Array to store large numbers as strings
    printf("Enter Your number: ");
    scanf("%s", num);  // Read as string to handle large input

    int length = strlen(num);
    
    // Process each digit
    for (int i = 0; i < length; i++) {
        if (num[i] >= '0' && num[i] <= '9') {  
            num[i] = ((num[i] - '0' + 1) % 10) + '0';  
        }
    }

    printf("New number is: %s\n", num);
    return 0;
}
