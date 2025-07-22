/*Tempreture of a city in farhenheit degrees is input throught the keyboard. Write a program to convert this temperature into celsius degrees 
and display it on the screen. The formula for conversion is C = (F - 32) * 5/9, 
where F is the temperature in farhenheit and C is the temperature in celsius.
*/
#include <stdio.h>
int main() {
    float fahrenheit, celsius;
    
    // Input temperature in Fahrenheit
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    
    // Convert to Celsius
    celsius = (fahrenheit - 32) * 5.0 / 9.0;
    
    // Display the result
    printf("Temperature in Celsius: %.2f\n", celsius);
    
    return 0;
}