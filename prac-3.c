//Write a program in c to perform addition,substraction,multiplication and division of two variable by taking user input.
#include <stdio.h>
int main() {
    int a, b, c, d, e;
    int add, sub, mult;
    float f,div;
    printf("Enter two numbers:");
    scanf("%d %d", &a, &b);
    c = a + b;
    d = a - b;
    e = a * b;
    if (b != 0) {
        f = (float)a / b;
        printf("Addition=%d\n", c);
        printf("Subtraction=%d\n", d);
        printf("Multiplication=%d\n", e);
        printf("Division=%.2f\n", f);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
    return 0;
}
