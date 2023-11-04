//Write a program in c to check whether a line is straight line or not.
#include <stdio.h>
int main() {
    float y, m, x, c;
    printf("Enter the values of Y, X, M, and C:\n");
    scanf("%f %f %f %f", &y, &x, &m, &c);
    float expected_y = m * x + c;
    if (y == expected_y) {
        printf("The point (%.2f, %.2f) lies on the line y = %.2fx + %.2f.\n", x, y, m, c);
    } else {
        printf("The point (%.2f, %.2f) does not lie on the line y = %.2fx + %.2f.\n", x, y, m, c);
    }
    return 0;
}
