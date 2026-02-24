#include<stdio.h>
int main()
{
    float a,b;
    char op;
    printf("enter the first value = ");
    scanf("%f",&a);
    printf("enter the second value = ");
    scanf("%f",&b);
    printf("enter a operator(+,-,*,/) = ");
    scanf(" %c",&op);
    switch(op)
    {
    case'+':
    printf("result =%f",a+b);
        break;
    case'-':
    printf("result =%f",a-b);
        break;
    case'*':
    printf("result =%f",a*b);
        break;
    case'/':
    printf("result=%f",a/b);
        break;        
    default:
    printf("invalid operator");
    }
}