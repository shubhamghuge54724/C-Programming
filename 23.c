/*
Title- 23. Write a C program to calculate factorial of a number.

*/

#include<stdio.h>
void main()
{
    int n,fact=1;
    printf("enter the number: ");
    scanf("%d",&n);
    while(n>=1)
    {
        fact*=n;
        n--;
    }
    printf("factorial is: %d\n",fact);
}

