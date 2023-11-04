//Write a program to print the following pyramid.
//*
//*   *
//*   *   *
#include <stdio.h>
int main() {
    int height;
    printf("Enter the height of the pyramid: ");
    scanf("%d", &height);

    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= height - i; j++) {
            printf("  ");
        }
        for (int j = 1; j <= i; j++) {
            printf("*");
            if (j < i) {
                printf("   "); // Add spaces between asterisks
            }
        }
        printf("\n");
    }

    return 0;
}
