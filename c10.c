// Wap to swap 3 values

#include<stdio.h>
#include<conio.h>

int main()
{
    int x,y,z,temp;
    printf("enter value of x,y,z:\n");
    scanf("%d %d %d",&x,&y,&z);

    printf("before swapping :%d %d %d\n",x,y,z);
    temp=x;
    x=y;
    y=z;
    z=temp;

    printf("after swapping,x,y,z: %d %d %d\n",x,y,z);  
    return 0;
}
