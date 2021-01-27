// solving an arithmetic expression
#include<stdio.h>
#include<conio.h>

int main()
{
    float S;
    int a,b,x;
    printf("Expresion:\n a==a/(a-x)*b");
    printf("\nenter value of a,b and x:\n");
    scanf("%d %d %d",&a,&b,&x);
    S=a-(float)a/(a-x)+b;
    printf("Solution of the expression =%f",S);
    return 0;
}
