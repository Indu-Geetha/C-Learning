// * *
// *
// *
// *
// * * * *
// * * * *
// *
// *
// *
// * * * * * *
// * * * * * *
// * * * * * *
#include<stdio.h>
int main(){
    int i,j,k,l,n,s=2;
    printf("Enter the limit:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            for(l=1;l<=s;l++){
                printf(" * ");
            }
            printf("\n");  
        }
         s=s+2;
        if(i==n){
            break;
        }
        printf(" *\n *\n *\n");


    }

}
