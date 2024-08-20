#include<stdio.h> 
int main() {
    int row, col;
    printf("Enter row : ");
    scanf("%d",&row);
    printf("Enter column : ");
    scanf("%d",&col);
    int mat[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("Enter element [%d][%d] : ",i,j);
            scanf("%d" ,&mat[i][j]);
        }
    }
    printf("Matrix : \n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d\t" ,mat[i][j]);
        }
        printf("\n");
    }
    printf("tanspose matrix is :\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d\t",mat[j][i]);
        }printf("\n");
    }
    int count=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(i!=j){
                if(mat[i][j]==mat[j][i]){
                    count+=1;
                }
            }
        }
        printf("\n");
    }
    if(count>1){
        printf("The given Matrix is Symmetric");
    }
    else
    printf("The given matrix is not Symmetric");
    
return 0; 
} 
