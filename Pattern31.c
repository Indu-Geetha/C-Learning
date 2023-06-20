// 11111
// 10001
// 10001
// 10001
// 11111
#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++){
            if(i==n-1||j==n-1||i==0||j==0)
            {
                printf(" 1 ");
            }
            else
            {
                printf(" 0 ");
            }
        }
        printf("\n");
    }
}