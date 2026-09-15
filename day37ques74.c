#include<stdio.h>
// ques is find the transpose of a matrix
int main(){ 
    int a[10][10],transpose[10][10];
    int rows,columns,i,j;
    printf("Enter no. of rows:");
    scanf("%d",&rows);
    printf("Enter no. of columns:");

    scanf("%d",&columns);
    printf("Enter Matrix elements\n");
    for (i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            scanf("%d",&a[i][j]);

        }

    }
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            transpose[j][i]=a[i][j];

        }

    }

    printf("Transpose of the matrix\n");
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            printf("%d",transpose[i][j]);
        }
        printf("\n");

    }
   return 0;
}