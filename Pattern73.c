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
    int i,j,n;
    printf("Enter the number of rows:");
    scanf("%d",&n);
   for(i=1;i<=n;i++){
for(int l=1;l<=i;l++){
   for(j=1;j<=i*2;j++)
      {
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