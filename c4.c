// WAP to enter 5 subject marks and display sum and percentage of marks.

#include<stdio.h>
#include<conio.h>

int main()
{
    int p,m,c,e,cs,sum;
    float percent;
    printf("enter physics marks:");
    scanf("%d",&p);
    printf("enter maths marks:");
    scanf("%d",&m);
    printf("enter chemistry marks:");
    scanf("%d",&c);
    printf("enter english marks:");
    scanf("%d",&e);
    printf("enter computer science marks:");
    scanf("%d",&cs);
    sum=p+m+c+e+cs;
    printf("sum of all marks is : %d\n",sum);
    percent=(sum/5);
    printf("percentage of student is : %f",percent);
    return 0;
}