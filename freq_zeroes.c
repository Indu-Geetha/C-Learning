#include<stdio.h>
int main(){
    int i,j,k=0,count=0,n,arr[20],digit,num;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    printf("Enter the elements into the array:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    //logic to count zeroes
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]==0){
            k++;
        }
    }
    for(i=0;i<n;i++){
        num=arr[i];
        while (num!=0){
            digit=num%10;
            if(digit==0){
                count++;
            }
            num/=10;
        }
      }
    printf("\nCount of zeroes:%d",k+count);

}