#include<stdio.h>
int main(){
    int i,j,max_freq,max_num,arr[10],count,n,p;
    printf("Enter the size:");
    scanf("%d",&n);
    printf("Enter the elements into the array:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    //logic to find max freq element
    max_freq=1;
    max_num=arr[0];
    for(i=0;i<n;i++)
    {
        count=1;
        for(j=i+1;j<=n-1;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>max_freq){
            max_freq=count;
            max_num=arr[i];
            p=i;
        }
    }
printf("The element %d occurs first at position %d which occurs %d times has the maximum  frequency in this array",max_num,p+1,max_freq);
}