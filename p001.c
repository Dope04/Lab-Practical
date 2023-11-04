//WAP in c to use printf and basic arithmetic operations.
#include<stdio.h>
int main(){
    int a=10, b=5;
    int sum=a+b;
    int diff=a-b;
    int pro=a*b;
    float quotient=a/b;
    printf("Sum:%d\n",sum);
    printf("Difference:%d\n",diff);
    printf("Product:%d\n",pro);
    printf("Quotient:%.2f\n", quotient);
    return 0;
}