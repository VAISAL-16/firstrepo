#include<stdio.h>
int main()
{
    int n,i,j,count=0;
    printf("Enter the size of an array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the array elements:\n");
    for(i=0;i<n;i++)
    {
     scanf("%d",&arr[i]);   
    } 
    printf("THE ARRAY ELEMENTS:\n");
    for(i=0;i<n;i++)
    {   
        printf("%d\t",arr[i]);
    }
    int res[n-1],del;
    printf("enter the index of the number to be get deleted:");
    scanf("%d",&del);
    if(del<n)
    {
    for(i=0;i<del;i++)
    {
     res[i]=arr[i];
    }
    for(i=del+1;i<n;i++)
    {
        res[i-1]=arr[i];
    }
    for(i=0;i<n-1;i++)
    {
        printf("%d\t",res[i]);
    }
    }
    else 
    printf("invalid index");
}+
