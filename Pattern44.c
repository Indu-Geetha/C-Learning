// 11111
// 1   1
// 1   1
// 1   1
// 11111 
#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++){
            if(i == 1 || j == 1 || i == n || j == n){
                printf("1");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

}