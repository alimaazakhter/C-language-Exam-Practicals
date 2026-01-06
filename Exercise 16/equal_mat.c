// Program to check whether two matrices are equal
#include<stdio.h>

void main()
{
    int arr[10][10], arr2[10][10];
    int i, j, r1, c1, r2, c2;
    int isequal = 1;

    printf("\nEnter number of rows for first matrix: ");
    scanf("%d", &r1);
    printf("Enter number of columns for first matrix: ");
    scanf("%d", &c1);

    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c1; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nEnter number of rows for second matrix: ");
    scanf("%d", &r2);
    printf("Enter number of columns for second matrix: ");
    scanf("%d", &c2);

    for(i = 0; i < r2; i++)
    {
        for(j = 0; j < c2; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    if(r1 != r2 || c1 != c2)
    {
        isequal = 0;
    }
    else
    {
        for(i = 0; i < r1; i++)
        {
            for(j = 0; j < c1; j++)
            {
                if(arr[i][j] != arr2[i][j])
                {
                    isequal = 0;
                    break;
                }
            }
            if(isequal == 0)
                break;
        }
    }

    if(isequal == 1)
        printf("\nBoth matrices are equal");
    else
        printf("\nMatrices are not equal");
}

