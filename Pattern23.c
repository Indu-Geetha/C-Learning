// sanglass number pattern
// 1 2 3 4 5
//  2 3 4 5
//   3 4 5
//    4 5
//     5
//     5
//    4 5
//   3 4 5
//  2 3 4 5
// 1 2 3 4 5
#include<stdio.h>
int main(){
    int i,j,n,k;
    printf("Enter the size:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(k=1;k<=i;k++){
        printf("  ");
        }
        for(j=i;j<=n;j++){
            printf(" %d  ",j);
        }
        printf("\n");       
    }
    for(i=n;i>=1;i--){
        for(k=1;k<=i;k++){
        printf("  ");
        }
        for(j=i;j<=n;j++){
            printf(" %d  ",j);
        }
        printf("\n");       
    }
    return 0;
}