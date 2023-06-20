    //   1
    // 2   2
//   3       3
// 4           4
//   3       3
    // 2   2
    //   1
#include <stdio.h>

int main() {
    int r, i, j,k,l;

    printf("Enter the number of rows: ");
    scanf("%d", &r);
    for(i=1;i<=r;i++){
        for(j=0;j<=((2*r)-1);j++){
            if(j==(r-(i-1))||j==(r+(i-1)))
            printf("%d ",i);
            else
            printf("  ");
        }
        printf("\n");
    }
      for(i=r-1;i>=1;i--){
        for(j=0;j<=((2*r)-1);j++){
            if(j==(r-(i-1))||j==(r+(i-1)))
            printf("%d ",i);
            else
            printf("  ");
        }
        printf("\n");
    }
}

    