//WAP in c by using scanf display username and age.
#include<stdio.h>
int main(){
    char user;
    int age;
    printf("Enter your Name:");
    scanf("%c", &user);
    printf("Enter your Age:");
    scanf("%d",&age);
    printf("Hello %c, Your age is %d" ,user ,age);
    return 0;
}