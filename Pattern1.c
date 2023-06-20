// Enter the number:6
//   1   2   3   4   5
//     2   4   6   8
//       3   6   9
//         4   8
//           5

#include<stdio.h>
int main(){
    int i,j,n,k;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        for(j=1;j<n-i+1;j++){
            printf("  %d ",i*j);
        }
        printf("\n");
    
       for(k=0;k<i;k++){
        printf("  ");
       }
    }
    return 0;
}
