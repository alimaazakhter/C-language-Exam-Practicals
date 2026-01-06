// Program to determine type of matrix
#include<stdio.h>

void main()
{
    int a[10][10], i, j, r, c;
    int isNull = 1, isUnit = 1;

    printf("Enter number of rows: ");
    scanf("%d", &r);

    printf("Enter number of columns: ");
    scanf("%d", &c);

    printf("Enter matrix elements:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("\nMatrix is:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }

    if(r == 1)
        printf("\nRow Matrix");

    if(c == 1)
        printf("\nColumn Matrix");

    if(r == c)
        printf("\nSquare Matrix");

    // Check Null Matrix
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            if(a[i][j] != 0)
            {
                isNull = 0;
                break;
            }
        }
        if(isNull == 0)
            break;
    }

    if(isNull == 1)
        printf("\nNull Matrix");

    // Check Unit Matrix
    if(r == c)
    {
        for(i = 0; i < r; i++)
        {
            for(j = 0; j < c; j++)
            {
                if(i == j && a[i][j] != 1)
                {
                    isUnit = 0;
                    break;
                }
                if(i != j && a[i][j] != 0)
                {
                    isUnit = 0;
                    break;
                }
            }
            if(isUnit == 0)
                break;
        }

        if(isUnit == 1)
            printf("\nUnit Matrix");
    }
}

