// WAP to sccept number and print their square and cube.
#include<stdio.h>
#include<conio.h>

int main()
{
    int num,sq,cube;
    printf("enter value of number:");
    scanf("%d",&num);
    sq=num*num;
    cube=num*num*num;
    printf("square of number is = %d\n",sq);
    printf("cube of number is = %d",cube);
    return 0;
}