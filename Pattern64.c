// 1
// 123
// 12345
// 1234567
#include<stdio.h>
int main(){
    int i,j,n;
    printf("Ennter the numnber:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=2*i-1;j++){
            printf("%d",j);
        }
        printf("\n");
    }
}