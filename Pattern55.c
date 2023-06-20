// Enter the number of rows:5
//         1
//       2 1
//     3 2 1
//   4 3 2 1
// 5 4 3 2 1
#include<stdio.h>
int main(){
    int i ,j,k,n;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(k=i;k<n;k++){
            printf("  ");
        }
        for(j=i;j>=1;j--){
            printf("%d ",j);
        }
        printf("\n");
    }
}
