// Enter the number of rows:5
//      *****
//     *   *
//    *   *
//   *   *
//  *****

#include<stdio.h>
int main(){
    int i,j,k,n;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(k=0;k<n-i;k++){
            printf(" ");
        }
        for(j=0;j<n;j++){
            if(i == n-1 ||j == n-1 || i==0 || j == 0)
            {
                printf("*");
            }
            else
            printf(" ");
        }
        
        printf("\n");
    }
}