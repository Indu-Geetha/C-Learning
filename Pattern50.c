// 1
// 212
// 32123
// 4321234
#include<stdio.h>
int main(){
    int i ,j ,k,n;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=i;j>=1;j--){
            printf("%d",j);
        }
        for(k=2;k<=i;k++){
            printf("%d",k);
        }
        printf("\n");
    }
}