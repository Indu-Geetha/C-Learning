
// *
// * * *
// *
// * * *
// * * *
// *
// * * *
// * * *
// * * *
// *
// * * * *
// * * * *
// * * * *
// * * * *

// *
// ***
// *
// ***
// ***
// *
// ***
// ***
// ***
// *
// ****
// ****
// ****
// ****
// *
// ***
// ***
// ***
// ***
#include<stdio.h>
int main(){
    int i,j,k,l,s,n;
    printf("Enter the range:");
    scanf("%d",&n);
    s=n;
    for(i=1;i<=n;i++){
       printf("*\n");
        for(j=0;j<i;j++){
            for(l=1;l<n;l++)
            {
                printf("*");
            }
            printf("\n");
        }
       
        if(i==n-1){
            printf("*\n");
            
        for(j=1;j<=i+1;j++){
            for(l=1;l<=n;l++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
     if(i==n){
            break;
        }
    
    }
}



