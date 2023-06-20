#include<stdio.h>
#include<math.h>
int main(){
    int i,j,k,n,sum=0;
    int arr[10]={1,-2,9,4,0,50,6,7,8,3};
    n = sizeof(arr)/sizeof(arr[0]);
    int max1=arr[0];
    int max2=arr[1];
    int maxsum=max1+max2;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            sum=arr[i]+arr[j];
            if(abs(sum) > abs(maxsum))
            {
                maxsum=sum;
                max1=arr[i];
                max2=arr[j];
            }
        }
    }
        printf("The pair is {%d,%d}:\n",max1,max2);
}