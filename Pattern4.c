// Enter the size;5
//  1 
//  1  2 
//  2  3  4 
//  4  5  6  7       
//  7  8  9  10  11 
#include<stdio.h>
int main(){
    int i,j,x=1,n;
    printf("Enter the size;");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            printf(" %d ",x-i);
            x++;
        }
        printf("\n");
    }
    return 0;
}