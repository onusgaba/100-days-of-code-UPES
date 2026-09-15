#include<stdio.h>
//ques is find the sum of each row of a matrix and store it in an array;
int main(){
    int matrix[10][10],sum[10];
    int rows,columns,i,j;

    printf("Enter no. of rows");
    scanf("%d",&rows);
    printf("Enter no. of columns");
    scanf("%d",&columns);
    printf("Enter Matrix elements\n");
    for(i=0;i<rows;i++){
        sum[i] = 0;
        for(j=0;j<columns;j++){
            scanf("%d",&matrix[i][j]);
            sum[i]=sum[i] + matrix[i][j];
            sum[i]= sum[i] + matrix[i][j];

        }

    }

    printf("Sum of each row:\n");
    for(i=0;i<rows;i++){
        printf("Row %d = %d\n",i+1,sum[i]);

    }
   return 0;
}