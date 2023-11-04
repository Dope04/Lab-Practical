//Write a program in c to find the distance between 2 points.
#include <stdio.h>
#include <math.h>
int main() {
    float x1, x2, y1, y2;
    printf("Enter the values of X_1, X_2, Y_1, and Y_2:\n");
    scanf("%f %f %f %f", &x1, &x2, &y1, &y2);
    float dx = x2 - x1;
    float dy = y2 - y1;
    float distance = sqrt(dx * dx + dy * dy);
    printf("Distance: %f\n", distance);
    return 0;
}
