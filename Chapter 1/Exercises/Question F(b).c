/*
The length and breadth of a rectangle and radius of the circle are input through the keyboard.
Write a program to calculate the area of the rectangle, the area of the circle, perimeter of the rectangle and 
also the circumference of the circle and display it on the screen.
*/
#include <stdio.h>
int main() {
    float length, breadth, radius, area_rectangle, area_circle, perimeter_rectangle, circumference_circle;

    printf("Enter length of rectangle: ");
    scanf("%f", &length);
    printf("Enter breadth of rectangle: ");
    scanf("%f", &breadth);
    printf("Enter radius of circle: ");
    scanf("%f", &radius);
    // Calculate area of rectangle
    area_rectangle = length * breadth;  
    // Calculate area of circle
    area_circle = 3.14 * radius * radius;   
    // Calculate perimeter of rectangle
    perimeter_rectangle = 2 * (length + breadth);
    // Calculate circumference of circle
    circumference_circle = 2 * 3.14 * radius;
    // Display results
    printf("Area of rectangle: %.2f\n", area_rectangle);
    printf("Area of circle: %.2f\n", area_circle);
    printf("Perimeter of rectangle: %.2f\n", perimeter_rectangle);
    printf("Circumference of circle: %.2f\n", circumference_circle);
    return 0;
}