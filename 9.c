/*
Title- 9. Write a C program to print multiplication table of any number.

*/

#include<stdio.h>
void main()
{
 int n,i=1;
 printf("enter the number: ");
 scanf("%d",&n);
 while(i<=10)
 {
     printf("%d\t",n*i);
     i++;
}
printf("\n");
}
