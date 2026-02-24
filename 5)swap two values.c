#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the first value = ");
    scanf("%d",&a);
    printf("enter the second value = ");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("the swaped values are = %d,%d\n",a,b);
    return 0;
}