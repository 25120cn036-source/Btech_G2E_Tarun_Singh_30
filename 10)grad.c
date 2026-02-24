#include<stdio.h>
int main ()
{
    int phy,chm,math,eng,cs,percentage;
    printf("enter the marks of physics = ");
    scanf("%d",&phy);
    printf("enter the marks of chemistry = ");
    scanf("%d",&chm);
    printf("enter the marks of mathematics = ");
    scanf("%d",&math);
    printf("enter the marks of english = ");
    scanf("%d",&eng);
    printf("enter the marks of CS = ");
    scanf("%d",&cs);
    percentage=(phy+chm+math+eng+cs)/5;
    if (percentage>=90&&percentage<=100)
    {
        printf("grade A");
    }
    else if(percentage>=80&&percentage<=90)
    {
        printf("grade B");
    }
    else if(percentage>=60&&percentage<=80)
    {
        printf("grade C");
    }
    else 
    {
        printf("grade D");
    }
    return 0;
}