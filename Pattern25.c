// 1  2  3  4  5  
// 16          6  
// 15          7  
// 14          8  
// 13 12 11 10 9 
----------------------------------------------------
// 1  2  3  4  5  
// 16 *$ *$ *$ 6
// 15 *$ *$ *$ 7
// 14 *$ *$ *$ 8
// 13 12 11 10 9
#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter the number:");
    scanf("%d",&n);
    int k=n+1,l=(n*3)-2,m=n*3+1;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==1)
                printf("%-3d",j);
            else if(j==n)
                printf("%-3d",k++);
            else if(i==n)
                printf("%-3d",l--);
            else if(j==1)
                printf("%-3d",m--);
            else
                printf("*$ ");
        }
        printf("\n");
    }
    return 0;
}