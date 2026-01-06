//2. Write a program to input a number and check whether it is divisible by 3.

#include<stdio.h>
int main()
{
	int a;
	printf("Enter any to number to check divisible by 3: ");
	scanf("%d", &a);
	
	if(a%3==0)
	{
		printf("%d is divisible by 3", a);
	}
	else
	{
		printf("Not divisible", a);
	}
	return 0;
}



