#include <stdio.h>
int main() {
    float amt, dis, bill;
    printf("Enter amount: ");
    scanf("%f", &amt);
    printf("Enter discount: ");
    scanf("%f", &dis);
    if (dis >= 10 && dis < 50) {
        bill = amt - amt * (dis / 100);
        bill += bill * 0.18;  // 18% GST
        printf("Bill = %f\n", bill);
    } else if (dis >= 50 && dis < 100) {
        bill = amt - amt * (dis / 100);
        bill += bill * 0.02;  // 2% GST
        printf("Bill = %f\n", bill);
    } else {
        printf("ERROR!\n");
    }
    return 0;
}
