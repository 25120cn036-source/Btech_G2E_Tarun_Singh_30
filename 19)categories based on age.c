#include<stdio.h>
int main()
{
    int a;
    printf("enter the ege = ");
    scanf("%d",&a);
    if (a<=12 && a>=0)
    {
        printf("the person is a child");
    }
    else if (a<=18 && a>12)
    {
        printf("the person is teenager");
    }
    else if (a<=60 && a>18)
    {
        printf("the person is adult");
    }
    else if (a<=100 && a>60)
    {
        printf("the person is senoir citizen");
    }
    else
    {
        printf("age is invalid");
    }
    return 0;
}