//4. Write a program to input a number and check whether it is prime.
#include<stdio.h>
int main()
{
    int n, i, count = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        if(n % i == 0)
            count++;
    }

    if(count == 2)
        printf("Prime number");
    else
        printf("Not prime");

    return 0;
}

