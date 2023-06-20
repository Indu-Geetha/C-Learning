// Enter the number of rows:6
//      *     
//       *    
//        *   
//         *  
//          * 
// ***********
//          * 
//         *  
//        *   
//       *    
//      *     


#include<stdio.h>
int main(){
    int i,j,k,n;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=(2*n)-1;j++)
        {
            if(j==(n+(i-1))){
                printf("* ");
            }
            else if(i==n){
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    for(i=n-1;i>=1;i--){
        for(j=1;j<=(2*n)-1;j++)
        {
            if(j==(n+(i-1))){
                printf("* ");
            }
        
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}