// Program to perform addition of two matrices
#include<stdio.h>

void main()
{
    int a[10][10], b[10][10], sum[10][10];
    int i, j, r, c;

    printf("\nEnter number of rows (max 10): ");
    scanf("%d", &r);

    printf("Enter number of columns (max 10): ");
    scanf("%d", &c);

    printf("\nEnter elements of first matrix:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter elements of second matrix:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    // Addition
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("\nAddition of two matrices:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
}

