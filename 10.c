/*
Title- 10. Write a C program to count number of digits in a number.

*/
#include<stdio.h>
void main()
{
    int n,i=0;
   printf("enter the number: ");
   scanf("%d",&n);
   while(n!=0)
   {
       n=n/10;
       i++;
   }
   printf("%d\n",i);
}
