// * * * * * *
// *
// * * * * 
// *
// * *
// *
#include<stdio.h>
int main(){
    int i,j,k,n;
    printf("enter the number of rows:");
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        for(j=2*i;j>=1;j--){
            printf("* ");
        }
        printf("\n");
        // if(i==1){
        //     break;
        // }
        printf("*\n");
    }
    return 0;
}