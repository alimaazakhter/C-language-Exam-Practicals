// main.c
#include<stdio.h>

extern int num;
void f1();

int main()
{
    num = 10;
    f1();
    return 0;
}

