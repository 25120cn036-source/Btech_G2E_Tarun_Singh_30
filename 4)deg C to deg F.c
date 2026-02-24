#include<stdio.h>
int main()
{
    float celsius,fahrenheit;
    printf("enter the temperature in degree celsius = ");
    scanf("%f",&celsius);
    fahrenheit=(celsius*9/5)+32;
    printf("temperature in fahrenheit = %f",fahrenheit);
    return 0;
}