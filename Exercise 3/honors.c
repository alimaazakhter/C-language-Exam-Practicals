/* Program to check whether a student gets Honors */
#include<stdio.h>

int main()
{
    int sub1, sub2, sub3;
    float per;

    printf("Enter marks of 3 subjects (out of 100): ");
    scanf("%d %d %d", &sub1, &sub2, &sub3);

    per = (sub1 + sub2 + sub3) / 3.0;

    if(per >= 85)
        printf("\nHonors");
    else
        printf("\nNot Honors");

    return 0;
}

