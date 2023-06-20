// *000*000*
// 0*00*00*0
// 00*0*0*00
// 000***000
// 0000*0000

#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(i=01;i<=n;i++){
        for(j=1;j<=2*n-1;j++)
        {
            if(i==j || j==n || i+j==2*n)
            {
                printf("*");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }
    return 0;
}