#include<stdio.h>
int main ()
{
    int a,b;
    printf("enter first number = ");
    scanf("%d",&a);
    printf("enter second number = ");
    scanf("%d",&b);
    if (a==b)
    {
        printf("the numbers are equal ");
    }
    else
    {
        printf("the numbers are not equal ");
    }
    return 0;
}