/*
Title- 24. Write a C program to find HCF (GCD) of two numbers.

*/
#include<stdio.h>
void main()
{
    int n1, n2,i=1,k;
    printf("enter 1st number: ");
    scanf("%d",&n1);
    printf("enter 2nd number: ");
    scanf("%d",&n2);
    while(i<=n1 && i<=n2)
    {
        if(n1%i==0 && n2%i==0)
        {
            k=i;
        }
        i++;
    }
    printf("GCD of %d and %d is: %d\n",n1,n2,k);
}    
    
