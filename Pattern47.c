// Enter the number of rows:5
//  1  2  3  4 
//  2  3  4  1
//  3  4  2  1
//  4  3  2  1
#include<stdio.h>
int main(){
    int i,j,n,k;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(i=1;i<n;i++){
        for(j=i;j<n;j++){
            printf(" %d ",j);
        }
       for(k=i-1;k>=1;k--){
        printf(" %d ",k);
       }
       printf("\n");
    }
    return 0;
}