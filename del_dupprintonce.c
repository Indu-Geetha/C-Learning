/*Delete Duplicates(print only once) elements from an array.*/
#include <stdio.h>

int main()
{
    int a[100],j,sum=0,i,n=5,count=0;
    printf("Enter The array elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;){
         if(j != i && a[i]==a[j]){
            for(int k=j;k<n;k++){
                a[k]=a[k+1];
            }
            n--;
              
         }
         j++;
            
        }  
    }
    printf("\nThe array without duplicates numbers:\n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
        count++;
        sum+=a[i];
    }

    return 0;
}