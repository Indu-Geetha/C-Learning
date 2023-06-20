// Enter the number:5
// 1        1        
// 12      21        
// 123    321        
// 1234  4321        
// 1234554321    
#include<stdio.h>
int main(){
    int i,j,k,n;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        for(k=1;k<=2*(n-i);k++)
        {
            printf(" ");
        }
        for(j=i;j>=1;j--){
            printf("%d",j);
        }
        printf("\n");
    }
}