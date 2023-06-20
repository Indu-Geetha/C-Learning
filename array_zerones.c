#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,j,n;
    int arr[9]={1,0,1,0,0,1,0,1,1};
    n=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++){
            if(arr[i]==0 && arr[j] == 1)
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("The resultant array:\n");
    for(j=0;j<n;j++){
        printf(" %d",arr[j]);
    }
   return 0;

}

