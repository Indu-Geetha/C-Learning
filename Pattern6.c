//    1
//    1   3
//    1   4  10
//    1   5  15  35
//    1   6  21  56 126

#include<stdio.h>
int main(){
    int i,j,x,n;
    printf("Enter the size:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
         x=1;
         for(j=1;j<=i;j++){
            printf("%4d",x);
            x=x*(i+j)/j;
         }
         printf("\n");
    }

return 0;
}