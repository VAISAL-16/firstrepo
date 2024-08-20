#include<stdio.h>
int main()
{
    int size,i,j,z,k,count=0,sum;
    scanf("%d",&size);
    int arr1[size];
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr1[i]);
    }
printf("enter the sum:");

    scanf("%d",&sum);
   for(i=0;i<size;i++)
   {
       for(j=i+1;j<size;j++)
       {
           for(z=j+1;z<size;z++)
           {   
              // if(arr1[i]!=arr1[j]!=arr1[z])
              
                k=arr1[i]+arr1[j]+arr1[z];
                if(k==sum)
                {
                    printf("[%d,%d,%d]",arr1[i],arr1[j],arr1[z]);
                    count++;
                    break;
                }
              } 
       }
   }
   
   if(count==0)
   {
       printf("no pair found");
       
   }
   return 0;
}
   
