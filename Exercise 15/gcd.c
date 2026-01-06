//5. Write a program to calculate gcd (hcf) using the Euclidean algorithm.
#include<stdio.h>
int main()
{
    int n1,n2,res;
    int gcd(int n1,int n2);
    printf("enter 2 numbers : ");
    scanf("%d %d",&n1,&n2);
    res = gcd(n1,n2);
    printf("result is %d",res);
}

int gcd(int n1,int n2)
{
    if (n2 == 0)
        return n1;
    return gcd(n2, n1%n2);
}

