#include<stdio.h>
#include<math.h>
int main()
{
    float PA,ROI,T,CI,SI;
    printf("enter the principa amount=");
    scanf("%f",&PA);
    printf("enter rate of interest=");
    scanf("%f",&ROI);
    printf("enter the time in years=");
    scanf("%f",&T);
    SI=(PA*ROI*T)/100;
    CI=PA*pow((1+ROI/100),T)-PA;
    printf("the SI is =%f\n",SI);
    printf("the CI is =%f\n",CI);
    return 0;
}