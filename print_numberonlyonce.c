#include <stdio.h>

int main()
{
    int a[100],j,f,k,i,n=10;
    printf("Enter The array elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
    
        for(j=i+1;j<=n;j++){
         if(j != i && a[i]==a[j]){
            for(k=j;k<=n-1;k++){
                a[k]=a[k+1];
            }n--;
            j--;
              
         }
            
        }
    }
        for(i=0;i<n;i++){
            printf(" %d",a[i]);
        }
    

    return 0;
}