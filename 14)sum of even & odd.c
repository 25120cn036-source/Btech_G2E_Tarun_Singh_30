#include<stdio.h>
int main()
{
    int n,evensum=0,oddsum=0;
    printf("enter the number = ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    if(i%2==0)
    {
        evensum=evensum + i;
    }
    else
    {
        oddsum=oddsum + i;
    }
    printf("the sum of even numbers = %d\n",evensum);
    printf("the sum of odd numbers = %d",oddsum);
    return 0;
}