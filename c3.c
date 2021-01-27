// program to print simple interest
#include<stdio.h>
#include<conio.h>

int main()
{
    float interest,p,r;
    int t;
    printf("enter value of principal:");
    scanf("%f",&p);

    printf("enter value of rate:");
    scanf("%f",&r);

    printf("enter vale of time:");
    scanf("%d",&t);

    interest = p*r*t/100;
    printf("simple interest:%f",interest);
    return 0;
}