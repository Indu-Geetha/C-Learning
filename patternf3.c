// **
// ***** –5
// **
// **
// **********  –10
// **
// **
// **
// *************** –15

#include<stdio.h>
int main(){
    int i ,j,k,n;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(k=1;k<=i;k++){
            for(int l=0;l<n-1;l++)
            {
                printf("*");
            }
            printf("\n");
        }

        for(j=0;j<5*i;j++){
            printf("*");
        }
        printf("\n");
        
    }
}
