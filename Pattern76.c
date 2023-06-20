// ************
// ************
// **
// **
// ************
// ************
// **
// **
// **

#include<stdio.h>
int main(){
    int i,j,k,n;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(i=0;i<2*n+1;i++){
        for(int m=0;m<2;m++){
      
            printf("*");
        }
        for(k=0;k<=n;k++){
            if(i>=0 && i<n/2 ||i>n-1 && i< n+2)
              {
            printf("**");
              }
              else
              {
                printf("  ");
              }
        }
        printf("\n");
        }
    }
