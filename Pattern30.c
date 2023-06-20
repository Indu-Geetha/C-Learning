// Enter the number:6
//  1  2  3  4  5    
//  2  1  2  3  4    
//  3  2  1  2  3    
//  4  3  2  1  2    
//  5  4  3  2  1  
#include<stdio.h>
int main(){
    int i,j,k,n;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n-1;i++){

        for(k=i;k>1;k--)
        {
            printf(" %d ",k);
        }
        for(j=1;j<=n-i;j++)
        {
            printf(" %d ",j);
        }
       
        
      printf("\n");
    
    }

}