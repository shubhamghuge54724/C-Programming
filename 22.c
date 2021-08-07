/*
Title- 22. Write a C program to find all factors of a number.

*/

#include<stdio.h>
void main()
{
 int num,i=2;
 printf("enter the number: ");
 scanf("%d",&num);
 printf("factors are: ");
 while(i<=num)
 {
     if(num%i==0)
     {
         printf("%d\t",i);
         
    }
 i++;
 }
 printf("\n");
}
