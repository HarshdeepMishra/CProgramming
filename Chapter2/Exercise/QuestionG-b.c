/*
Write a program to recieve Cartesion coordinates (x, y) of a point and convert them to polar coordinates (r, θ).
Calculate the radius (r) and angle (θ) in radians, then display the results.
r = sqrt(x^2 + y^2)
θ = tan-1(y/x)
*/
#include <stdio.h>
#include <math.h>

int main(){
    double x, y, r, theta;

    printf("Enter the cartesion coordinates (x, y): ");
    scanf("%lf %lf", &x, &y);
    r = sqrt(x * x + y * y);
    theta = atan2(y, x); // atan2 handles the quadrant correctly
    printf("Polar coordinates:\n");
    printf("Radius (r): %.2g\n", r);
    printf("Angle (θ) in radians: %.2g\n", theta);
    
}