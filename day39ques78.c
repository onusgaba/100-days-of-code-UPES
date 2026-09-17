#include<stdio.h>
int main(){
    int a[10][10];
    int i,j,n,sum=0;
    printf("Enter order of matrix:\n");
    scanf("%d",&n);
    printf("Enter elements of matrix\n ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);

        }
    }
    for(i=0;i<n;i++){
        sum=sum+ a[i][j];
    }
    printf("Sum of main diagonal elements= %d",sum);

    return 0;
}