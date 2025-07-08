/*
If a five digt number is input through the keyboard, write a program to calculate the sum of its digits
and display the result on the screen.
*/
#include <stdio.h>

int sumOfDigits(int);
int lengthOfNumber(int);

int main() {
    int number;
    printf("Enter a five-digit number: ");
    scanf("%d", &number);

    if (lengthOfNumber(number) != 5) {
        printf("Please enter a valid five-digit number.\n");
        return 1;
    }

    int sum = sumOfDigits(number);
    printf("The sum of the digits is: %d\n", sum);

    return 0;
}

int lengthOfNumber(int number) {
    int length = 0;
    while (number != 0) {
        number /= 10;
        length++;
    }
    return length;
}

int sumOfDigits(int x) {
    int sum = 0;
    while (x != 0) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}
