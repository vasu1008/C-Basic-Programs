// WAP to calculate the gross salary of an employee

#include<stdio.h>
#include<conio.h>
int main()
{
    int bs,hr,ta,ma,S;
    printf("Enter the basic salary:");
    scanf("%d",&bs);
    printf("Enter house renting allowance:");
    scanf("%d",&hr);
    printf("Enter traveling allowance:");
    scanf("%d",&ta);
    printf("Enter medical allowance:");
    scanf("%d",&ma);
    S=bs+hr+ta+ma;
    printf("Gross salary is : %d\n",S);
    return 0;
}