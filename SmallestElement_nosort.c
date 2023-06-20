// The minimum element is:-5

#include<stdio.h>
int main(){
    int arr[10]={1,2,3,4,-5,6,7,8,9,10};
    int min_ele,i,n=10;
    min_ele=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i] < min_ele)
        {
            min_ele=arr[i];
        }
    }
    printf("The minimum element is:%d",min_ele);
   return 0;  

}