// 5 5 5 5 5 5 5 5 5 
// 5 4 4 4 4 4 4 4 5 
// 5 4 3 3 3 3 3 4 5 
// 5 4 3 2 2 2 3 4 5 
// 5 4 3 2 1 2 3 4 5 
// 5 4 3 2 2 2 3 4 5 
// 5 4 3 3 3 3 3 4 5 
// 5 4 4 4 4 4 4 4 5 
// 5 5 5 5 5 5 5 5 5
// C(i,j)=N-min(i,j)+1
#include<stdio.h>
int main(){
    int i,j,n,min;
    printf("Enter the element:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            min=i<j?i:j;
            printf("%d ",n-min+1);
        }
        for(j=n-1;j>=1;j--){
            min=i<j?i:j;
            printf("%d ",n-min+1);
        }
        printf("\n");
    }
    for(i=n-1;i>=1;i--){
        for(j=1;j<=n;j++){
            min=i<j?i:j;
            printf("%d ",n-min+1);
        }
        for(j=n-1;j>=1;j--){
            min=i<j?i:j;
            printf("%d ",n-min+1);
        }
        printf("\n");

    }
  return 0;

}