// Enter the number of rows:3
// **
// *
// *
// *
// ****
// ****
// *
// *
// *
// ******
// ******
// ******
#include<stdio.h>
int main(){
    int i,j,k,n;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=0;j<i;j++){
            for(k=0;k<2*i;k++){
                printf("*");
            }
            printf("\n");
        }
       if(i==n){
        break;
       }
        printf("*\n*\n*\n");

      
    }
}
