/*If a five-digit number is input through the keyboard, write a program to reverse the
number.
*/
/*Logic
    1. Take a 5 digit number as input
    2. First check the number is 5 digit or not
    3. If it is not 5 digit then print "Please enter 5 digit number"
    4. If it is 5 digit then remove the last digit and store it in a variable
    5.same as above remove the first digit and store it in a variable
    6.interchange the first and last digit
    7.now remove the second digit and store it in a variable
    8. remove the second last digit and store it in a variable
    9. interchange the second and second last digit
    10. print the reversed number
*/

#include<stdio.h>

int main(){
    int num, first_digit, last_digit, middle_digit, second_digit, second_last_digit, reversed_num;
    while (1) {
        printf("Enter a 5-digit number: ");
        scanf("%d", &num);
        
        if (num >= 10000 && num <= 99999) {
            break;
        }
        printf("Invalid input! Please enter a 5-digit number.\n");
    }
    last_digit = num % 10;
    first_digit = num / 10000;
    middle_digit = (num / 100) % 10;
    second_digit = (num / 1000) % 10;
    second_last_digit = (num / 10) % 10;
    reversed_num = last_digit * 10000 + second_last_digit * 1000 + middle_digit * 100 +second_digit * 10 + first_digit;
    printf("\n Reversed number is: %d\n", reversed_num);
         
return 0;          
}