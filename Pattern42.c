//     1
//    123
//   12345
//  1234567
// 123456789
//  1234567
//   12345
//    123
//     1
#include<stdio.h>
int main(){
    int i,j,n,k,l;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(k=1;k<=n-i;k++){
            printf(" ");
        }
        for(j=1;j<2*i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    for(i=n-1;i>=1;i--){
        for(k=n;k>i;k--){
            printf(" ");
        }
        for(j=1;j<2*i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}