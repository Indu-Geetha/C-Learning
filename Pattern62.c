// Enter the limit:3
//       1 
//     2 3 4         
//   5 6 7 8 9 
#include<stdio.h>
int main(){
    int i,j,n,k,num=1;
    printf("Enter the limit:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(k=i;k<=n;k++){
            printf("  ");
        }
        for(j=1;j<=2*i-1;j++){
            printf("%d ",num++);
        }
        
        printf("\n");
    }
}