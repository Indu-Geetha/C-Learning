// * *
// * *
// *
// *
// * * * *
// * * * *
// * * * *
// *
// *
// *
// *
// * * * * * *
// * * * * * *
// * * * * * *
// * * * * * *

#include<stdio.h>
int main(){
    int i,j,k,l,n;
    printf("Enter the size");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i+1;j++){
            for(k=1;k<=2*i;k++)
            {
                printf("* ");
            }
            printf("\n");
        }
        if(i==n){
            break;
        }
        for(l=1;l<=2*i;l++){
                 printf("*\n");
        }
    }
}