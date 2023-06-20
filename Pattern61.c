// Enter the limit:5
// 11111
// 2222
// 333
// 22
// 1

#include<stdio.h>
int main(){
    int i,j,k,n;
    printf("Enter the limit:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
     for(j=5;j>=i;j--){
        if(i<=n-2){
     
            printf("%d",i);
        }

        else
        printf("%d",n+1-i);
     }
        printf("\n");
    }
}
