#include<stdio.h>
int main()
{
    int n,i,j,sum,count=0,mul=0,k=0;
    printf("enter the array size:");
    scanf("%d",&n);
    int arr[n],arr1[n],res[n],zero=0;
    printf("enter the array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        arr1[i]=arr[i];
    }
    for (i=0;i<n;i++)
    {
        arr[i]=1; 
        mul=1;
        for(j=0;j<n;j++)
        {
        mul=mul*arr[j];
        }
        res[k]=mul;
        arr[i]=arr1[i];
        k++;
    }
    for(i=0;i<k;i++)
    {
    printf("%d ",res[i]);
}
    
}
        
  
