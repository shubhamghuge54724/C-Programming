/*
Title- 21. Write a C program to find power of a number using for loop.

*/

#include<stdio.h>
void main()
{
 int num ,value,power=1;
 printf("enter the number: ");
 scanf("%d",&num);
 printf("enter the power value: ");
 scanf("%d",&value);
 for( ;value>=1;value--)
 {
     power*=num;
 }
 printf("answer is: %d\n",power);
}
