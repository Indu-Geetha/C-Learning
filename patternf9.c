#include <stdio.h>

int main()
{
    int i,j,l,n=3;
    for(i=1;i<=n;i++){
        for(j=1;j<i+1;j++){
            for(l=1;l<=2;l++){
               printf("*");
        }
        printf("\n");
    
        }
        for(j=1;j<=5*i;j++){
            printf("*");
        }
         printf("\n");
    }
 

    return 0;
}