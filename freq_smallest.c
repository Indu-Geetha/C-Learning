#include<stdio.h>
int main(){
    int arr[10]={1,2,3,0,5,2,7,8,5,0};
    int min_ele,i,j,n=10,count=0;
    min_ele=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i] < min_ele)
        {
            min_ele=arr[i];
        }
    }
    for(i=0;i<n;i++){
        if (arr[i]==min_ele)
        {
            count++;
        }
    }
    printf("Minimum element %d occurs %d times in the given array",min_ele,count);
return 0;
}
