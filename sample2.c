#include <stdio.h>

int main()
{
    int a[100],i,n=5,sum=0,j,c=0;
    printf("Enter elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
for(i=0;i<n;i++){
    if(a[i]%2==0){

        for(j=i;j<n-1;j++){
            a[j]=a[j+1];
        }

    n--;
    i--;
    }      
}
printf("Result:\n");
printf("%d",n);
for(i=0;i<n;i++){
    printf("\n%d ",a[i]);
   
}

    return 0;
}