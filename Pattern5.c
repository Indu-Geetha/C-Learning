// 1------1
// 1 1-------1  
// 1 2 1-----
// 1 3 3 1
// 1 4 6 4 1 
// n-->5
// i-->1 to <=n
// j-->1 to <=i
// x=1,x=x*[i-j]/j

#include<stdio.h>
int main(){
    int i,j,x,n;
    printf("Enter the size:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
         x=1;
         for(j=1;j<=i;j++){
            printf("%4d",x);
            x=x*(i-j)/j;
         }
         printf("\n");
    }

return 0;
}