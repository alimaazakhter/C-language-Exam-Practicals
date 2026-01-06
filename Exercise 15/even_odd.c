//1. Write a program to input a number and check whether it is even/odd.

#include<stdio.h>
int main()
{

int a;
printf("Enter any number to check if it is odd or even: ");
scanf("%d", &a);

if(a%2==0){
	printf("Even: ", a);
}
else
{
	printf("odd: ", a);
}
return 0;
}
