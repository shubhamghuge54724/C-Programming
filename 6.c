/*
Title- 6. Write a C program to find sum of all natural numbers between 1 to n.

*/
#include<stdio.h>

void main()
{
    int n,n1,sum=0;
    printf("enter the number: ");
    scanf("%d",&n);
    n1=n;
    while(n>=1)
    {
        sum+=n;
        n--;
    }
    
    printf("sum of 1 to %d natural numbers is: %d\n",n1,sum);
}
        
