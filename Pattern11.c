// 1 0 1 0 1    //0 1 0 1 0
// 0 0 0 0 0    //0 0 0 0 0j=0j<n;j++
// 1 0 1 0 1    //0 1 0 1 0
// 0 0 0 0 0
// 1 0 1 0 1

#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter the size:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++){
            printf("%d ",(i*j)%2);
        }
        printf("\n");
    }
    return 0;
}