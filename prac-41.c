#include <stdio.h>
int main() {
    int row = 5;
    for (int i = 0; i < 2 * row - 1; i++) {
        int a;
        if (i < row) {
            a = i;
        } else {
            a = 2 * row - i - 2;
        }
        for (int j = 0; j < a; j++) {
            printf(" ");
        }
        for (int k = 0; k < 2 * row - 2 * a; k++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
