// Enter the size of the array:6
// Enter the elements in the array:22
// 11
// 22
// 432
// 56
// 56
// 11 occurs:1 times 
// 22 occurs:2 times 
// 56 occurs:2 times 

#include<stdio.h>
int main(){
    int i,j,arr[10],n,count;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the elements in the array:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);  
    }
    for(i=10;i<99;i++)
    {
       count=0;
       for(int j=0;j<n;j++){
        if(arr[j]==i)
        {
            count++;
        }
       }
    if(count>0){
      printf("%d occurs:%d times\n",i,count);
    } 
    }   
return 0;
}