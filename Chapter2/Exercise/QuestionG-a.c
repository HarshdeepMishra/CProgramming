#include <stdio.h>

int main() {
    int number, n, sum = 0, count = 0;

    printf("Enter a five-digit number: ");
    scanf("%d", &number);

    n = number; // Copy for counting digits
    while (n != 0) {
        n = n / 10;
        count++;
    }

    if (count != 5) {
        printf("Please enter a valid five-digit number.\n");
        return 1;
    }

    n = number; // Copy again for sum calculation
    while (n != 0) {
        sum = sum + n % 10;
        n = n / 10;
    }

    printf("The sum of the digits is: %d\n", sum);

    return 0;
}