#include<stdio.h>
int main()
{
    int arr[];
    int size=sizeof(arr)/sizeof(arr[0]);
    int zero=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]!=0)
        {
            int temp=arr[i];
            arr[i]=arr[zero];
            arr[zero]=temp;
            zero++;
        }
    }
    for(int j=0;j<size;j++)
    {
        printf("%d",arr[j]);
    }
    return 0;
}
