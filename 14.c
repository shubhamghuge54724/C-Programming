/*
Title- 14. Write a C program to calculate sum of digits of a number.

*/
#include<stdio.h>
void main()
{
 int n,sum=0;
 printf("enter the number: ");
 scanf("%d",&n);
 while(n!=0)
 {
  sum+=(n%10);
  n=n/10;
 }
 printf("sum is: %d\n",sum);
}
