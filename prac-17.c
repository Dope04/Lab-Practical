//Write a program in c to find out the Simple and Compound Interest.
#include <stdio.h>
#include <math.h>
int main() {
    float principal, rate, time, simple_interest, compound_interest;
    printf("Enter the values of Principal (P), Rate (R), and Time (T):\n");
    scanf("%f %f %f", &principal, &rate, &time);
    simple_interest = (principal * rate * time) / 100.0;
    compound_interest = principal * (pow((1 + (rate / 100.0)), time) - 1);
    printf("Simple Interest: %.2f\n", simple_interest);
    printf("Compound Interest: %.2f\n", compound_interest);
    return 0;
}
