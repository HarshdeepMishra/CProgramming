/*
Paper size A0 dimensions: 1189 mm x 841 mm. Each subsequent size A(n) is defined as A(n-1) cut in half, parallel to its shorter sides.
Thus, paper of size A1 is 841 mm x 594 mm, A2 is 594 mm x 420 mm, and so on.
Write a program to calculate the dimensions of paper sizes A0 to A8 and display them on the screen.
*/
#include <stdio.h>
int main() {
    int i;
    // A0 paper size dimensions in mm
    float width = 1189;
    float height = 841;
    printf("Paper sizes from A0 to A10:\n");
    for (int i = 0; i <= 8; i++) {
        printf("A%d: %.2f mm x %.2f mm\n", i, width, height);
        // Update dimensions for the next size
        float temp = width;
        width = height;
        height = temp / 2;
    }
}