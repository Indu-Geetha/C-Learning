// * * * * *
// *
// *
// *
// * * * * * * * * * *
// *
// *
// *
// *
// *
// *
// * * * * * * * * * * * * * * *

// i=1---j>1 to5,k>1 to3
// i=2----j>1 to 10,k>1 to 6
//i=3----j>1 to 15,k-nothing
// j=1;j<=5*i
// k=1;k<=3*i
// when i==3,put break and ecit the loop before entering k loop
#include<stdio.h>
int main(){
    int i,j,k,n;
    printf("Enter the no of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=5*i;j++){
            printf(" * ");
        }
        printf("\n");
        if(i==n){
            break;
        }
        for(k=1;k<=3*i;k++){
            printf(" *\n");
        }
    }

 return 0;

}
