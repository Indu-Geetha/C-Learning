// 1
// 2 3
// 3 4 5
// 4 5 6 7
// 5 6 7 8 9 
#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter the size;");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=0;j<i;j++){
            printf(" %d ",i+j); 
        }
        printf("\n");
    }
    return 0;
}