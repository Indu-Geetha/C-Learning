#include <stdio.h>
#include<stdbool.h>
#include<math.h>
bool isPrime(int  );
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


int main()
{
   int i,n,arr[ ]={1,2,3,4};
   n=sizeof(arr)/sizeof(arr[0]);
   for(i=0;i<n;i++){
       if(isPrime(arr[i]))
       {
           arr[i]=1;
       }
       else if(arr[i]%2==0)
       {
           arr[i]=0;
       }
       else
       {
    	   arr[i]=-1;
       }
   }
   printf("The resultant array:");
   for(i=0;i<n;i++){
       printf(" %d ",arr[i]);
   }
    return 0;
}
