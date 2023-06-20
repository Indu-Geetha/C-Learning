// this code works best for one element occuring at odd position

#include<stdio.h>
int main(){
    int i,j,n,arr[20],freq[20],count;
         int odd_count=0;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the elements in to the array:");
    for(i=0;i<n;i++){
       scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
     count=0;
     for(j=0;j<n;j++){
        if(arr[i]==arr[j]){
            count++;
        }
     }
     if(count %2 !=0){
        printf("element %d occurs:%d\n",arr[i],count);
     }
     }
}
    