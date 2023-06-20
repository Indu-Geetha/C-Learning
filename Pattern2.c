// * * * * *
//  *        *
//   *   	   *
//    *	        *
//      * * *  * *


#include<stdio.h>
int main(){
    int i ,j,k ,n=5;
    for(i=1;i<=n;++i){
        for(k=1;k<i;k++){
            printf(" ");
        }
        for(j=1;j<=n;j++){
            if(i==n||i==1||j==n||j==1){
                printf("*");
            }
        else
          {
            printf(" ");
          }
        }
        printf("\n");
    }
    return 0;
        

}