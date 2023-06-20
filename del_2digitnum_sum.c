// Enter the size:8
// Enter the elements:5
// 1
// 22
// 333
// 4444
// 55555
// 0
// 89
// The original array:
// 5 1 22 333 4444 55555 0 89
// The array without 2 digit numbers:
// 5 1 333 4444 55555 0
// The sum of the elements in array without 2 digit numbers:60338

#include<stdio.h>
int main(){
    int i,j,k,n,arr[20],sum=0,count=0;
    float avg;
    printf("Enter the size:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("The original array:\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    //logic to delete 2 digit numbers
    for(i=10;i<=99;i++){
        for(j=0;j<n;){
            if(arr[j]==i){
                for(k=j;k<n;k++){
                    arr[k]=arr[k+1];
                }
                n--;
            }
            j++;
        }
    }
    printf("\nThe array without 2 digit numbers:\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
        count++;
        sum+=arr[i];
    }
    printf("\nThe sum of the remaining %d elements in array without 2 digit numbers:%d",count,sum);
    avg=sum/count;
    printf("\nThe average is:%f",avg);
    
}