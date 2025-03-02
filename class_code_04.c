/*If a four-digit number is input through the keyboard, write a program to obtain the sum
of the first and last digit of this number.*/
#include<stdio.h>
int main(){
    int num , first_digit , last_digit , sum;

    printf("Enter your 4 digit number: ");
    scanf("%d", &num);

    last_digit = num % 10;
    first_digit = num / 1000;

    sum = first_digit + last_digit;
    
    printf("Sum of First and Last digit of %d is : %d\n", num, sum);

    return 0;
}