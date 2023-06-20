// * * *
// * 
// *
// * * * * * *
// *
// *
// * * * * * * * * *
#include<stdio.h>
int main(){
    int i,j,k,n;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
      for(j=1;j<=3*i;j++){
        printf("* ");
      }
           printf("\n");
      if(i==n){
        break;
      }
      for(k=1;k<=2;k++){
        printf("* ");
         printf("\n");
      }
    
    }
    return 0;
}
