////Write a c program to check whether a number is happy number or not.
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//int i,j,num,temp,sum=0;
//printf("Enter number\n");
//scanf("%d",&num);
//while(sum!=1 && sum!=4)
//{
//sum=0;
//while(num>0)
//{
//j=num%10;
//sum+=(j*j);
//num=num/10;
//}
//num=sum;
//}
//if(sum==1)
//printf("Happy Number\n");
//else
//printf("UnHappy Number\n");
//}

//Write a c program to calculate the logarithm value of a numerical constant by taking the value as an input from the user.
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//    double n,result;
//    printf("Enter Number:");
//    scanf("%lf",&n);
//    result = log(n);
//    printf("The Logarithm of %.2lf is %lf\n",n, result);
//}

//
//Write a c program to demonstrate tree recursion.
//#include <stdio.h>
//void Tree(int n)
//{
//    if (n > 0)
//    {
//        printf("%d\t", n);
//        Tree(n - 1);
//        Tree(n - 1);
//    }
//}
//int main()
//{
//    int n = 3;
//    Tree(n);
//}

//Write a program in c to display the element from an array by taking the index position from the user.
//#include <stdio.h>
//int main()
//{
//    int size,j;
//    printf("Enter the size of the array:");
//    scanf("%d",&size);
//    int num[size];
//    for(int i=0;i<size;i++)
//    {
//        printf("Enter index element no:%d\n",i);
//        scanf("%d",&num[i]);
//    }
//    printf("Enter the index no. :");
//    scanf("%d",&j);
//    printf("%d",num[j]);
//}

//Write a program in c to manually calculate the length of a string.
//#include <stdio.h>
//int main()
//{
//    char str[100];
//    int length=0;
//    printf("Enter a string: \n");
//    scanf("%s",str);
//    for(int i=0; str[i]!='\0'; i++)
//    {
//        length++;
//    }
//    printf("Length of input string: %d",length);
//}



//Write a c program to add 2 complex numbers using structures.
//#include<stdio.h>
//int main()
//{
//    struct complex
//    {
//        int real;
//        int imaginary;
//    }c1,c2,c3;
//    c1.real=10,c1.imaginary=20;
//    c2.real=15,c2.imaginary=30;
//    c3.real=c1.real+c2.real;
//    c3.imaginary=c1.imaginary+c2.imaginary;
//    printf("The Complex Number is: %d+%di",c3.real,c3.imaginary);
//}


//Write a program in c to implement macros and solve an arithmetical operation through it.
//#include<stdio.h>
//#define d(x) (x*x*x)
//#define e(x,y) (x+y-x*x-y+x*x)
//
//int main()
//{
//    int a = 5;
//    printf("\n%d",e(a,a+5));
//    printf("\n%d",d(a-1));
//}


//write a Program in C to create a file
//#include<stdio.h>
//int main() {
//    char fname[100];
//    printf("Enter file name to be created >> ");
//    gets(fname);
//
//    FILE *fp;
//    fp=fopen(fname, "w");
//    printf("File successfully created !!! ");
//    fclose(fp);
//}

//Write a c program to access elements of an array using pointers.
#include <stdio.h>
int main()
{
    int arry[5];
    int i;
    printf("Enter 5 elements for the array: ");
    for (i = 0; i < 5; ++i)
        scanf("%d", arry + i);
    int *ptr = arry;
    printf("You have entered \n");
    for(i = 0; i < 5; i++)
        printf("array[%d] = %d\n",i,*(ptr+i));
}