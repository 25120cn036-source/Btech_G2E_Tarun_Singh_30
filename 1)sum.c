#include<stdio.h>
int main()
{
    float m1,m2,m3,m4,m5,sum,percentage;
    printf("enter the marks of five subjects=");
    scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);
    sum=m1+m2+m3+m4+m5;
    percentage=sum/5;
    printf("total marks obtained =%f\n",sum);
    printf("percentage=%f\n",percentage);
    return 0;
}