// Enter the number:4
// 1
// 121
// 12321
// 1234321
#include<stdio.h>
int main(){
    int i,j,n,k;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {   for(int l=i;l<=n;l++){
        printf("  ");
    }
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        for(k=i-1;k>=1;k--){
            printf("%d ",k);
        }
    printf("\n");
    }
}