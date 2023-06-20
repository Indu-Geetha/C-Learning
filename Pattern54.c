// Enter the number:6
// 1
// 2*2
// 3*3*3
// 4*4*4*4
// 5*5*5*5*5
// 6*6*6*6*6*6       
// 5*5*5*5*5
// 4*4*4*4
// 3*3*3
// 2*2
// 1
#include<stdio.h>
int main(){
    int i,j,k,n;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=2*i-1;j++)
        {   if(j%2 == 0)
              printf("*");
            else
               printf("%d",i);
        }
        printf("\n");
    }
    for(i=n-1;i>=1;i--){
        for(j=1;j<=2*i-1;j++)
        {   if(j%2 == 0)
              printf("*");
            else
               printf("%d",i);
        }
        printf("\n");
    }

    
}