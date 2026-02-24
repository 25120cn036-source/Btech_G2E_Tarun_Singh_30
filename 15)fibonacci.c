#include<stdio.h>
int main()
{
    int n,term1,term2,nextterm;
    term1=0;
    term2=1;
    printf("enter the no. of terms = ");
    scanf("%d",&n);
    printf("fabonacci series:%d %d",term1,term2);
    for (int i=3;i<=n;i++)
    {
        nextterm=term1+term2;
        printf("%d",nextterm);
        term1=term2;
        term2=nextterm;
    }
    return 0;
}