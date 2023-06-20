// 11111
// 0000
// 111
// 00
// 1
#include<stdio.h>
int main(){
    int i,j,n;
    printf("eNTER THE NUMBE ROF ROWS:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=i;j<=n;j++){
            if(i%2 == 0)
            {
                printf("0");
            }
            else
            {
                printf("1");
            }
        }
        printf("\n");
    }
    return 0;
}