#include<stdio.h>
int main(){
    int arr[10]={1,25,3,0,25,2,7,8,25,0};
    int max_ele,i,j,n=10,count=0;
    max_ele=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i] > max_ele)
        {
            max_ele=arr[i];
        }
    }
    for(i=0;i<n;i++){
        if (arr[i]==max_ele)
        {
            count++;
        }
    }
    printf("Maximum element %d occurs %d times in the given array",max_ele,count);
return 0;
}