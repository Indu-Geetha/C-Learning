#include<stdio.h>
#include <stdbool.h>
#include<math.h>
bool isPrime(int );
int main(){
    int i,j,temp,arr[10]={2,5,66,7,37,100,25,84,91,16},n;
    n=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
        if((isPrime(arr[i])) && (!isPrime(arr[j])))
            {
           temp=arr[i];
           arr[i]=arr[j];
           arr[j]=temp;
           }
    
        }
    }
    printf("array:");
    for(i=0;i<n;i++)
    {
   printf(" %d ",arr[i]);
   }
}
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }

    int limit = sqrt(num);
    for (int i = 2; i <= limit; i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}