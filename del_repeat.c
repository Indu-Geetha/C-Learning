#include<stdio.h>
int main(){
    int i,j,k,n;
    int arr[10]={1,2,3,1,4,5,4,5,6};
    n=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                for(k=j;k<n-1;k++){
                    arr[k]=arr[k+1];
                }
                j--;
                n--;
            }
           
        }
    }
    for(i=0;i<k-1;i++){
        printf(" %d ",arr[i]);
    }
}