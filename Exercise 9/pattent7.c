/*write a program to print pattent*/

//55555
//4444
//333
//22
//1
#include<stdio.h>
void main()
{
    int i,n,j;
    printf("enter no of rows : ");
    scanf("%d",&n);

    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",i);
        }

        printf("\n");
    }
}
