//Write a program to get the discriminant value of a quadratic equation.
#include <stdio.h>
int main() {
    int a, b, c;
    double D;
    printf("Enter the values of A, B, and C:\n");
    scanf("%d %d %d", &a, &b, &c);
    D = (b * b) - (4.0 * a * c); // Use 4.0 to ensure floating-point arithmetic
    printf("The value of Discriminant is: %f\n", D);
    return 0;
}
