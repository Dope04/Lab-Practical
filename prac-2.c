//Write a program in c to change the value of a variable by taking an input from the user.

#include<stdio.h>
int main() {
    int a = 10;
    printf("Current value of a: %d\n", a);
    printf("Enter a new value for a: ");
    scanf("%d", &a);
    printf("Updated value of a: %d\n", a);
    return 0;
}
