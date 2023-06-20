// Enter the number of rows:5
// * A * B * 
// C * D * E
// * F * G *
// H * I * J
// * K * L *


#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    char ch='A';
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            if((i+j) %2==1){
                printf("%c ",ch++);
            }
            else
            {
                printf("* ");
            }

        }
        printf("\n");
    }
}