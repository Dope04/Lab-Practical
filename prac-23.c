//Write a program in c to check whether a person is eligible to vote or not.
#include<stdio.h>
int main()
{
    int age;
    printf("Enter birth year:\n");
    scanf("%d",&age);
    if(age>=18)
        printf("The person is eligible to vote");
    else
        printf("The person is not eligible to vote");
}
