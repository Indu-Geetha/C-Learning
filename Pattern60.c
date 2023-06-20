// Enter the limit:5
// 5 4 3 2 *         
// 5 4 3 * 1         
// 5 4 * 2 1         
// 5 * 3 2 1         
// * 4 3 2 1 
#include<stdio.h>
int main(){
    int i,j,k,n;
    printf("Enter the limit:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=n;j>=i+1;j--){
            printf("%d ",j);
        }
        if(i==j){
            printf("* ");
        }
        for(k=i-1;k>=1;k--){
            printf("%d ",k);
        }
        printf("\n");
    }
}