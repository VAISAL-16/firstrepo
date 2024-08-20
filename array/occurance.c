#include<stdio.h>
int main(){
    int n,i,j,k,count;
    printf("Enter number of elements : ");
    scanf("%d",&n);
    int arr[n],arr1[n];
    printf("Array : ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        arr1[i]=1;
    }
    for(i=0;i<n;i++){
        count=1;
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                arr1[j]=0;
            }
            
        }
        if(arr1[i]!=0){
            arr1[i]=count;
        }
    }
    for(i=0;i<n;i++){
        if(arr1[i]!=0){
            printf("%d occurs %d times\n",arr[i],arr1[i]);
        }
    }
    
}   
