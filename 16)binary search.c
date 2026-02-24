#include<stdio.h>
int main ()
{
    int n,arr[5],i;
    int low,high,mid,key,found=0;
    printf("enter the no. of elements = ");
    scanf("%d",&n);
    printf("enter %d elements in shorted order =\n",n);
    for (int i=0;i<=4;i++)
    { 
        printf("element %d = ",i+1);
    scanf("%d",&arr[i]);
    }
    printf("enter the element to be searched = ");
    scanf("%d",&key);
    low=1;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==key)
        {
            printf("element  %d found at position %d\n",arr[mid], mid+1);
            found=1;
            break;
        }
            else if (arr[mid]<key)
        {
             low=mid+1;
        }
            else
        {
             high=mid-1;
        }     
    }
    if (found==0)
    {
        printf("element found\n");
    }
    return 0;
}