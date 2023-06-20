// Enter the nummber of rows:5
//           *****   
//         *****     
//       *****       
//     *****
//   *****
#include<stdio.h>
int main(){
    int i,j,k,n;
    printf("Enter the nummber of rows:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(k=1;k<=n-i;k++){
            printf("  ");
        }
        for(j=0;j<n;j++){
            printf("*");
        }
        printf("\n");
    }
}