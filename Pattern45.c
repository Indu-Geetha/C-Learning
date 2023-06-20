//                   1  
//               4   9  16 
//          25  36  49  64  81 
//     100 121 144 169 196 225 256 
// 289 324 361 400 441 484 529 576 625

#include<stdio.h>
int main(){
    int i,j,k,n,m=1;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(k=1;k<=n-i;k++){
            printf("   ");
        }
        for(j=1;j<2*i;j++)
        {
            printf("%3d ",m*m);
            m++;
        }
        printf("\n");
    }
}