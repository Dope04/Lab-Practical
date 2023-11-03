//Write a program in c to print the memory addresses of 5 variables.
#include <stdio.h>
int main() {
    int a = 10;
    int b = 20;
    int c = 30;
    int d = 40;
    int e = 50;
    printf("Memory address of a: %p\n", (void*)&a);
    printf("Memory address of b: %p\n", (void*)&b);
    printf("Memory address of c: %p\n", (void*)&c);
    printf("Memory address of d: %p\n", (void*)&d);
    printf("Memory address of e: %p\n", (void*)&e);
    return 0;
}
