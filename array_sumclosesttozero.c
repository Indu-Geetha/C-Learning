#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int i,j,minsum,n,sum;
    int arr1[] = {38, 44, 63, -51, -35, 19, 84, -69, 4, -4};
    n = sizeof(arr1)/sizeof(arr1[0]);
    int min1=arr1[0];
    int min2=arr1[1];
    minsum=min1+min2;
    for(i =0;i<n-1;i++){
        for(j=i+1;j<n;j++){

            sum=arr1[i]+arr1[j];
           if(abs(sum) < abs(minsum))
           {
               minsum=sum;
               min1=arr1[i];
               min2=arr1[j];
           }
        }
    }
    printf("The pair is {%d,%d}:\n",min1,min2);
    return 0;
}
