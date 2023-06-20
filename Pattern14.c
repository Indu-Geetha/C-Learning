// * *
// *
// *
// *
// * * * *
// * * * *
// *
// *
// *
// * * * * * *
// * * * * * *
// * * * * * *
#include<stdio.h>
int main(){
    int i,j,k,l,n,s1=2,s2=3;
    printf("enter the size:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<i+1;j++){
           for(l=0;l<s1;l++)
            {
                printf("* ");
            }   
            printf("\n"); 
        }
         
        s1=s1+2;
        if(i==n-1)
            break;
        for(k=0;k<s2;k++){
            printf("*\n");
        }
    }
    return 0;
}