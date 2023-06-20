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
// * * * 
// * * * 
// * * * 
// * * * 
#include<stdio.h>
int main(){
    int i,j,k,n;
    printf("Enter the number of rows");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("*\n");
    for(k=0;k<=i;k++){
        for(int l=0;l<n;l++){
            printf("*");
        }
        printf("\n");
    }

    }
}
