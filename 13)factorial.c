#include<stdio.h>
int main()
{
    int n,factorial=1;
    printf("enter the number to be find the factorial = ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        factorial=factorial*i;
    }
    printf("the facotial of given number is =%d",factorial);
    return 0;
}
