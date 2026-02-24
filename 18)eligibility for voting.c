#include<stdio.h>
int main()
{
    int a;
    printf("enter the age  = ");
    scanf("%d",&a);
    if (a>=18)
    {
        printf("person can eligible for voting");
    } 
    else
    {
        printf("person cannot eligible for voting");
    }
    return 0;
}