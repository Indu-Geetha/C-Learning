// 1
// 2 3
// 3 4 5 
// 4 5 6 7
// 5 6 7 8 9 


#include<stdio.h>
int main(){
    int i,j,n,x;
    printf("Enter the size;");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
       x=1;
        for(j=0;j<=i;j++){
            printf(" %d ",x+i);
            x++;
        }
        printf("\n");
    }
    return 0;
}