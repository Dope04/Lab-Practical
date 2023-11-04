//Write a program in c to make your own digital storage converter by taking the size in KB and convert it MB,GB and TB.
#include <stdio.h>
int main() {
    float KB;
    printf("Enter the size in Kilo Bytes:");
    scanf("%f", &KB);
    printf("Size in Mega Bytes: %.2f MB\n", KB * 0.001);
    printf("Size in Giga Bytes: %.2f GB\n", KB * 0.000001);
    printf("Size in Tera Bytes: %.2f TB\n", KB * 0.000000001);
    return 0;
}
