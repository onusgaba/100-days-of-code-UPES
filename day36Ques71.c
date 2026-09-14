#include<stdio.h>

int main(){ 
    int a[10][10],rows,columns,i,j;

    printf("Enter the no. of rows");
    scanf("%d",&rows);
    printf("enter the no. of columns");
    scanf("%d",&columns);
    printf("Enter matrix elemnts\n");
    for(i=0;i<rows;i++)
    {
    for(j=0;j<columns;j++)
    {
    scanf("%d",&a[i][j]);
    }
}
    printf("Matrix is\n");

for(i=0;i<rows;i++)
{
    for(j=0;j<columns;j++)
    {
        printf("%d",a[i][j]);

    }
    printf("\n");

}


   return 0;
}