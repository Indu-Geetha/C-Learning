// 0 0 0 0 0   // 1 1 1 1 1   i=1;i<=n;i++
// 1 1 1 1 1   // 0 0 0 0 0
// 0 0 0 0 0   // 1 1 1 1 1
// 1 1 1 1 1   // 0 0 0 0 0
// 0 0 0 0 0   // 1 1 1 1 1
#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter the size:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=1;j<=n;j++){
            printf("%d ",i%2);
        }
        printf("\n");
    }
    return 0;
}