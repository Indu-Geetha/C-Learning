//     5
//    54
//   543
//  5432
// 54321
#include<stdio.h>
int main(){
    int i,j,n,k=1;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        for(j=1;j<i;j++){
            printf("   ");
        }
        for(j=n;j>=i;j--)
        {
            printf("%3d",j);
        }
        printf("\n");
    }
}

