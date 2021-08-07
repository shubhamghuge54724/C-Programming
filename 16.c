/*
Title- 16. Write a C program to enter a number and print its reverse.

*/

#include<stdio.h>
void main()
{
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    printf("the number in reverse order is: ");
    while(n!=0)
    {
        printf("%d",n%10);
        n/=10;
    }
    printf("\n");
}
