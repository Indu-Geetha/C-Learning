// 1
// 232
// 34543
// 4567654
// 567898765 
#include<stdio.h>
int main(){
    int i,j,k,n;
    setbuf(stdout,NULL);
    printf("Enter the number");
    scanf("%d",&n);
    for(i=1;j<=n-1;i++){
        for(j=0;j<i;j++){
            printf("%d",i+j);
        }
    for(k=i-1;k>0;k--){
        printf("%d",i+k-1);
    }
    printf("\n");
    }
    return 0;
}