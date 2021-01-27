// WAP to find the area of circle, rectangle, triangle and square.

#include<stdio.h>
#include<conio.h>

int main()
{
    int l,b,s,H,B,r,rectangle,square;
    float circle,triangle;
    printf("Enter length and bredth of rectangle:");
    scanf("%d %d",&l,&b);
    printf("Enter side of square:");
    scanf("%d",&s);
    printf("Enter height and base of triangle:");
    scanf("%d %d",&H,&B);
    printf("Enter radius of circle:");
    scanf("%d",&r);
    rectangle=l*b;
    square=s*s;
    triangle=(float)1/2*H*B;
    circle=3.14*r*r;
    printf("Area of rectangle is : %d \n",rectangle);
    printf("Area of square is : %d \n",square);
    printf("Area of triangle is : %f \n",triangle);
    printf("Area of circle is : %f \n",circle);
    return 0;
}
